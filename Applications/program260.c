#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
typedef struct node
{
	int data;
	struct node* next;
} NODE,*PNODE,**PPNODE;

void insertFirst(PPNODE first, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*first == NULL)
	{
		*first = newn;
	}
	else
	{
		newn->next = *first;
		*first = newn;
	}
	
}

void Display(PNODE first)
{
	while(first != NULL)
	{
		printf("|%d| -> ", first->data);
		first = first->next;
	}
	printf("NULL\n");
}

bool CheckLoop(PNODE first)
{
	PNODE fast = first;
	PNODE slow = first;
	
	bool bFlag = false;
	
	while((fast != NULL) && (fast->next != NULL) && (slow != NULL))
	{
		fast = fast->next->next;
		slow = slow->next;
		
		if(fast == slow)
		{
			bFlag = true;
			break;
		}
	}
	
	return bFlag;
}

int main()
{
	PNODE Head = NULL;
	int middleEle = 0;
	
	PNODE temp1, temp2;
	insertFirst(&Head, 60);
	insertFirst(&Head, 50);
	insertFirst(&Head, 40);
	insertFirst(&Head, 30);
	insertFirst(&Head, 20);
	insertFirst(&Head, 10);
	
	temp1 = Head;
	temp2 = Head;
	
	while(temp1->next != NULL)
	{
		temp1 = temp1->next;
	}
	
	temp2 = temp2->next->next;
	
	temp1->next = temp2;
	
	bool bRet = CheckLoop(Head);
	
	if(bRet == true)
	{
		printf("Loop Detected");
	}
	else
	{
		printf("There is no Loop");
	}
	
	return 0;
}