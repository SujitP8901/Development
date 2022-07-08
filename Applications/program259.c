#include<stdlib.h>
#include<stdio.h>

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

int MiddleElement(PNODE first)
{
	if(first == NULL)
	{
		printf("LL is Empty");
		return -1;
	}
	
	PNODE fast = first;
	PNODE slow = first;
	
	while((fast != NULL) && (fast->next != NULL))
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	
	return slow->data;
}

int main()
{
	PNODE Head = NULL;
	int middleEle = 0;
	
	//insertFirst(&Head, 110);
	insertFirst(&Head, 100);
	insertFirst(&Head, 90);
	insertFirst(&Head, 80);
	insertFirst(&Head, 70);
	insertFirst(&Head, 60);
	insertFirst(&Head, 50);
	insertFirst(&Head, 40);
	insertFirst(&Head, 30);
	insertFirst(&Head, 20);
	insertFirst(&Head, 10);
	
	Display(Head);
	
	middleEle = MiddleElement(Head);
	
	printf("Middle Element is : %d", middleEle);
	
	return 0;
}