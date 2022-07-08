#include<iostream>
#include<stdio.h>
using namespace std;

typedef struct node
{
	int data;
	struct node* next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = no;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d| -> ", Head->data);
		Head = Head->next;
	}
	printf("\n");
}

int DisplayR(PNODE Head)
{
	if(Head != NULL)
	{
		printf("|%d| -> ", Head->data);
		Head = Head->next;
		DisplayR(Head);
	}
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

int CountR(PNODE Head)
{
	static int iCnt = 0;
	PNODE temp = Head;
	if(temp != NULL)
	{
		iCnt++;
		temp = temp->next;
		CountR(temp);
	}
	
	return iCnt;
}

void InserAtPos(PPNODE Head, int no, int iPos)
{
	int size = CountR(*Head);
	if((iPos < 1) && (iPos > size+1))
	{
		return;
	}
	
	PNODE newn = new NODE;
	
	newn->data = no;
	newn->next = NULL;
	
	if(iPos == 1)
	{
		if(*Head == NULL)
		{
			*Head = newn;
		}
		else
		{
			newn->next = *Head;
			*Head = newn;
		}
	}
	else if(iPos == size + 1)
	{
		PNODE temp = *Head;
		if(*Head == NULL)
		{
			*Head = newn;
		}
		else
		{
			int i = 0;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newn;
		}
	}
	else
	{
		PNODE temp = *Head;
		for(int i = 1; i < iPos-1; i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		temp->next = newn;
	}
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	InsertFirst(&first, 101);
	InsertFirst(&first, 51);
	InsertFirst(&first, 21);
	InsertFirst(&first, 11);
	
	DisplayR(first);
	cout << "\n";
	
	//iRet = CountR(first);
	//cout << "Number of Elements : " << iRet <<endl;
	
	//  InserAtPos(&first,10,3);
	
	DisplayR(first);
	cout<< "\n";
	iRet = CountR(first);
	cout << "Number of Elements : " << iRet <<endl;
	//iRet = CountR(first);
	//cout << "Number of Elements : " << iRet <<endl;
	
	return 0;
}