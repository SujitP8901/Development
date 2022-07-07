// Doubly Linear LL
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
	struct Node* prev;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE; 

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;

	if((*First == NULL) && (*Last == NULL))
	{
		*First = newn;
		*Last = newn;
	}
	else
	{
		newn->next = *First;
		(*First)-> prev = newn;
		*First = newn;
	} 
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->data = no;
	newn->next = NULL;
	newn->next = NULL;

	if((*First == NULL) && (*Last == NULL))
	{
		*First = newn;
		*Last = newn;
	}
	else
	{
		(*Last)->next = newn;
		newn->prev = *Last;
		*Last = newn;
	}
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
	if((*First == NULL) && (*Last == NULL))
	{
		return;
	}
	else if(*First == *Last)
	{
		free(*First);
		*First = NULL;
		*Last = NULL;
	}
	else
	{
		(*First) = (*First)->next;
		free((*First)->prev);
		(*First)->prev = NULL;
	}
}

void DeleteLast(PPNODE First, PPNODE Last)
{
	if((*First == NULL) && (*Last == NULL))
	{
		return;
	}
	else if(*First == *Last)
	{
		free(*First);
		*First = NULL;
		*Last = NULL;
	}
	else
	{
		*Last = (*Last)->prev;
		free((*Last)->next);
		(*Last)->next = NULL;
	}
}

void Display(PNODE First, PNODE Last)
{
	PNODE temp = First;

	while(temp != NULL)
	{
		printf("|%d|->", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
}

int Count(PNODE First, PNODE Last)
{
	PNODE temp = First;
	int iCnt = 0;

	while(temp != NULL)
	{
		iCnt++;
		temp = temp->next;
	}
	return iCnt;
}

void InsertAtPos(PPNODE First, PPNODE Last, int no, int ipos)
{
    int size = Count(*First, *Last);
    int i = 0;
    PNODE temp = *First;
    PNODE newn = NULL;
    if((ipos < 1) || (ipos > size+1))
    {
        printf("Invalid position\n");
        return;
    }
    
    if(ipos == 1)
    {
        InsertFirst(First, Last, no);
    }
    else if(ipos == size+1)
    {
        InsertLast(First, Last, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        
        newn->next = NULL;
        newn->prev = NULL;
        newn->data = no;
        
        for(i = 1; i < ipos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteAtPos(PPNODE First, PPNODE Last, int ipos)
{
    int size = Count(*First, *Last);
    int i = 0;
    PNODE temp = *First;

    if((ipos < 1) || (ipos > size))
    {
        printf("Invalid position\n");
        return;
    }
    
    if(ipos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if(ipos == size)
    {
        DeleteLast(First, Last);
    }
    else
    {
        for(i = 1; i < ipos-1; i++)
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
	PNODE first = NULL, last = NULL;
    
    int iChoice = 1, value = 0, iRet = 0, pos = 0;
    
    while(iChoice != 0)
    {
        printf("\n________________________________________\n");
        printf("Enter the desired operation that you want to perform on LinkedList\n");
        printf("1 : Insert the node at first position\n");
        printf("2 : Insert the node at last position\n");
        printf("3 : Insert the node at  the desired position\n");
        printf("4 : Delete the first node\n");
        printf("5 : Delete the last node\n");
        printf("6 : Delete the node at desired position\n");
        printf("7 : Display the contents of linked list\n");
        printf("8 : Count the number of nodes from linked list\n");
        printf("0 : Terminate the application\n");
        printf("\n________________________________________\n");

        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter the data to insert\n");
                scanf("%d",&value);
                InsertFirst(&first,&last,value);
                break;
                
            case 2:
                printf("Enter the data to insert\n");
                scanf("%d",&value);
                InsertLast(&first,&last,value);
                break;
                
            case 3:
                printf("Enter the data to insert\n");
                scanf("%d",&value);
                printf("Enter the position\n");
                scanf("%d",&pos);
                InsertAtPos(&first,&last,value,pos);
                break;
                
            case 4:
                DeleteFirst(&first,&last);
                break;
                
            case 5:
                DeleteLast(&first,&last);
                break;
                
            case 6 :
                printf("Enter the position\n");
                scanf("%d",&pos);
                DeleteAtPos(&first,&last,pos);
                break;
                
            case 7:
                printf("Elemenet of Linked list are\n");
                Display(first, last);
                break;
                
            case 8:
                iRet = Count(first, last);
                printf("Number of elements are : %d\n",iRet);
                break;
                
            case 0:
                printf("Thank for using Marvellous Linked List\n");
                break;
                
            default:
                printf("Please enter proper choice\n");
                break;
        }
    }
	return 0;
}