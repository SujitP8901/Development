#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
	struct node* prev;
}NODE, *PNODE, **PNODE;

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
	if(*Head != NULL)	// LL contains atleast one node
	{
		*Head = (*Head)->next;
		free(temp);
		if(*Head != NULL)
		{
			(*Head)->prev = NULL;
		}
	}
}

void DeleteFirstX(PPNODE Head)
{
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head)->next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		*Head = (*Head)->next;
		free(*Head->prev);
		*Head->prev = NULL;
	}
}

void DeleteLast(PPNODE Head)
{
	PNODE temp = *Head;
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head)->next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->prev->next = NULL;
		free(temp);
	}
}

void InsertAtPos(PPNODE Head, int no, int pos)
{
	int size = Count(*Head);
	int i = 0;
	PNODE newn = NULL;
	PNODE temp = *Head;
	
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
		newn = (PNODE)malloc(sizeof(NODE));
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		for(i = 1; i < pos-1; i++)
		{
			temp = temp->next;
		}
		temp->next->prev = newn;
		newn->next = temp->next;
		
		newn->prev = temp;
		temp->next = newn;
	}
}

void DeleteAtPos(PPNODE Head, int pos)
{
	int size = Count(*Head);
	int i = 0;
	PNODE temp = *Head;
	
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
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
	}
}

int main()
{
	PNODE first = NULL;
	
	int iChoice = 1, iValue = 0, iPos = 0, iRet = 0;
	
	while(iChoice != 0)
	{
		printf("\n____________________________________________________________________\n");
		printf("Enter the Operation that you Want to do on Doubly LinkedList : \n");
		printf("1 : Insert the node at First Position\n");
		printf("2 : Insert the node at Last Position\n");
		printf("3 : Insert the node at desired Position\n");
		printf("4 : Delete the First Node\n");
		printf("5 : Delete the Last Node\n");
		printf("6 : Delete the Node at desired Position\n");
		printf("7 : Display the Contents of Linked List\n");
		printf("8 : Count the Number of Node\n");
		printf("0 : Terminate the Application\n");
		printf("\n____________________________________________________________________\n");
		scanf("%d",&iChoice);
		
		switch(iChoice)
		{
			case 1 : 
				printf("Enter the Value of new node : \n");
				scanf("%d", &iValue);
				InsertFirst(&first, iValue);
				break;
			
			case 2 : 
				printf("Enter the Value of new node : \n");
				scanf("%d", &iValue);
				InsertLast(&first, iValue);
				break;
				
			case 3 : 
				printf("Enter the Value of new node : \n");
				scanf("%d", &iValue);
				
				printf("Enter the Position : \n");
				scanf("%d", &iPos);
				
				//InsertAtPos(&first, iValue, iPos);
				break;
				
			case 4 : 
				DeleteFirst(&first);
				break;
				
			case 5 : 
				DeleteLast(&first);
				break;
				
			case 6 : 
				printf("Enter the Position : \n");
				scanf("%d", &iPos);
				DeleteAtPos(&first, iPos);
				break;
				
			case 7 : 
				Display(first);
				break;
			
			case 8 : 
				iRet = Count(first);
				printf("Number of Elements in the Linked List : %d", iRet);
				break;
				
			case 0 : 
				printf("Thanks for Accessing the Marvellous Doubly Linked List");
				break;
			
			default : 
				printf("Please enter Proper Choice");
				break;
		}
	}
	
	return 0;
}