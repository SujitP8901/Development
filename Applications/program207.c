#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if((*Head == NULL) && (*Tail == NULL))
	{
		*Head = newn;
		*Tail = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
	(*Tail)->next = *Head;
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if((*Head == NULL) && (*Tail == NULL))
	{
		*Head = newn;
		*Tail = newn;
	}
	else
	{
		(*Tail)->next = newn;
		*Tail = newn;
	}
	(*Tail)->next = *Head;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
	if((*Head == NULL) && (*Tail == NULL))	// CLL is Empty
	{
		return;
	}
	else if(*Head == *Tail)		// CLL having single node
	{
		free(*Head);
		*Head = NULL;
		*Tail = NULL;
	}		
	else						// CLL having more than one node
	{
		*Head = (*Head)->next;
		free((*Tail)->next);
		(*Tail)->next = *Head;
	}
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
	PNODE temp = *Head;
	if((*Head == NULL) && (*Tail == NULL))
	{
		return;
	}
	else if(*Head == *Tail)
	{
		free(*Head);
		*Head = NULL;
		*Tail = NULL;
	}
	else
	{
		while(temp->next != *Tail)
		{
			temp = temp->next;
		}
		free(*Tail);
		*Tail = temp;
		(*Tail)->next = *Head;
	}
}

void Display(PNODE Head, PNODE Tail)
{
	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}
	
	do
	{
		printf("|%d| -> ", Head->data);
		Head = Head->next;
	}while(Head != Tail->next);
	printf("\n");
}

int Count(PNODE Head, PNODE Tail)
{
	int iCnt = 0;
	
	if((Head == NULL) && (Tail == NULL))
	{
		return iCnt;
	}
	
	do
	{
		iCnt++;
		Head = Head->next;
	}while(Head != Tail->next);
	
	return iCnt;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{
	int size = Count(*Head, *Tail);
	PNODE temp = *Head;
	PNODE newn = NULL;
	int i = 0;
	
	if((iPos < 1) && (iPos > size+1))
	{
		return;
	}
	
	if(iPos == 1)
	{
		InsertFirst(Head, Tail, no);
	}
	else if(iPos == size+1)
	{
		InsertLast(Head, Tail, no);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
		
		for(i = 1; i < iPos-1; i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
	}
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
	int size = Count(*Head, *Tail);
	int i = 0;
	PNODE temp = *Head;
	PNODE targetted = NULL;
	
	if((iPos < 1) || (iPos > size))
	{
		return;
	}
	
	if(iPos == 1)
	{
		DeleteFirst(Head, Tail);
	}
	else if(iPos == size)
	{
		DeleteLast(Head, Tail);
	}
	else
	{
		for(i = 1; i < iPos-1; i++)
		{
			temp = temp->next;
		}
		targetted = temp->next;
		temp->next = targetted->next;
		free(targetted);
	}
}

int main()
{
	PNODE first = NULL;
	PNODE last = NULL;
	
	int iValue = 0, iChoice = 1, pos = 0, iRet = 0;
	
	while(iChoice != 0)
	{
		printf("\n_______________________________________________________________\n");
		printf("Enter the Operation that you want to do on Linked List : \n");
		printf("1 : Insert the node at First Position\n");
		printf("2 : Insert the node at Last Position\n");
		printf("3 : Insert the node at Desired Position\n");
		printf("4 : Delete the node at First Position\n");
		printf("5 : Delete the node at Last Position\n");
		printf("6 : Delete the node at Desired Position\n");
		printf("7 : Display the Contents of Linked List\n");
		printf("8 : Count the Number of Nodes\n");
		printf("0 : To Terminate the Application\n");
		printf("\n_______________________________________________________________\n");
		scanf("%d", &iChoice);
		
		switch(iChoice)
		{
			case 1 :
				printf("Enter the Value of the Node : \n");
				scanf("%d", &iValue);
				InsertFirst(&first, &last, iValue);
				break;
			
			case 2 :
				printf("Enter the Value of the Node : \n");
				scanf("%d", &iValue);
				InsertLast(&first, &last, iValue);
				break;
				
			case 3 :
				printf("Enter the Value of the Node : \n");
				scanf("%d", &iValue);
				
				printf("Enter the Position : \n");
				scanf("%d", &pos);
				
				InsertAtPos(&first, &last, iValue, pos);
				break;
				
			case 4 :
				DeleteFirst(&first, &last);
				break;
				
			case 5 : 
				DeleteLast(&first, &last);
				break;
				
			case 6 :
				printf("Enter the Position : \n");
				scanf("%d", &pos);
				
				DeleteAtPos(&first, &last, pos);
				break;
				
			case 7 :
				Display(first, last);
				break;
				
			case 8 :
				iRet = Count(first, last);
				printf("Number of Elements : %d", iRet);
				break;
				
			case 0 :
				printf("Thank You For Accessing Marvellous Singly Circular Linked List\n");
				break;
				
			default :
				printf("Enter Valid Option\n");
				break;
		}
	}
	
	return 0;
}