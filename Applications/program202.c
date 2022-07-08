#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
	struct node* prev;
}NODE, *PNODE, **PPNODE; 

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	
	//step 1
	newn = (PNODE)malloc(sizeof(NODE));
	
	//step2
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	//step3
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		(*Head)->prev = newn;
		
		*Head = newn;
	}
}

void InsertLast(PPNODE Head, int no)
{
	PNODE newn = NULL;
	PNODE temp = *Head;
	//step 1
	newn = (PNODE)malloc(sizeof(NODE));
	
	//step2
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	//step3
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
		newn->prev = temp;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d| -> ", Head->data);
		Head = Head->next;
	}
	printf("NULL\n");
}

int Count(PNODE Head)
{
	int iCnt = 0;
	while(Head != NULL)
	{
		iCnt++;
		Head = Head->next;
	}
	return iCnt;
}

void DeleteFirst(PPNODE Head)
{
	PNODE temp = *Head;
	if(*Head != NULL)
	{
		*Head = (*Head)->next;
		(*Head)->prev = NULL;
		
		free(temp);
	}
}

void DeleteLast(PPNODE Head)
{
	PNODE temp = *Head;
	if(*Head == NULL)		// LL is Empty
	{
		return;
	}
	else if((*Head)->next == NULL)	//LL contains atleasr=t One Element
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

void InsertAtPos(PPNODE Head, int no, int pos)
{
	
	int i = 0, size = 0;
	PNODE newn = NULL;
	PNODE temp = *Head;
	size = Count(*Head);
	
	if((pos < 1) || (pos > size + 1))
	{
		return;
	}
		
	if(pos == 1)
	{
		InsertFirst(Head, no);
	}
	else if(pos == size + 1)
	{
		InsertLast(Head, no);
	}
	else
	{
		//step1
		newn = (PNODE)malloc(sizeof(NODE));
		
		//step2
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		//step3
		for(i = 1; i < pos-1; i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next->prev = newn;
		
		temp->next = newn;
		newn->prev = temp;
	}

}

void DeleteAtPos(PPNODE Head, int pos)
{
	int size = Count(*Head);
	PNODE temp = *Head;
	PNODE targeted = NULL;
	int i = 0;
	
	if((pos < 1) || (pos > size))
	{
		return;
	}
	
	if(pos == 1)
	{
		DeleteFirst(Head);
	}
	else if(pos == size)
	{
		DeleteLast(Head);
	}
	else
	{
		for(i = 1; i < pos-1; i++)
		{
			temp = temp->next;
		}
		targeted = temp->next;
		
		temp->next = targeted->next;
		targeted->next->prev = targeted->prev;
		
		free(targeted);
	}
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	
	InsertFirst(&first, 51);
	InsertFirst(&first, 21);
	InsertFirst(&first, 11);
	
	InsertLast(&first, 101);
	InsertLast(&first, 111);
	
	Display(first);
	
	iRet = Count(first);
	printf("Number of Elements : %d\n", iRet);
	
	DeleteFirst(&first);
	
	Display(first);
	
	iRet = Count(first);
	printf("Number of Elements : %d\n", iRet);
	
	DeleteLast(&first);
	
	Display(first);
	
	iRet = Count(first);
	printf("Number of Elements : %d\n", iRet);
	
	InsertAtPos(&first, 121, 2);
	
	Display(first);
	
	iRet = Count(first);
	printf("Number of Elements : %d\n", iRet);
	
	DeleteAtPos(&first, 5);
	
	Display(first);
	
	iRet = Count(first);
	printf("Number of Elements : %d\n", iRet);
	
	return 0;
}