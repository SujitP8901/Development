#include<iostream>
#include<stdio.h>
using namespace std;

typedef struct node
{
	int data;
	struct node* lchild;
	struct node* rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int no)
{
	PNODE newn = new NODE;
	
	newn->data = no;
	newn->lchild = NULL;
	newn->rchild = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		PNODE temp = *Head;
		while(1)		//	Unconditional Loop 
		{
			if(temp->data == no)
			{
				cout << "Duplicate node\n";
				delete newn;
				break;
			}
			else if(temp->data > no)
			{
				if(temp->lchild == NULL)
				{
					temp->lchild = newn;
					break;
				}
				temp = temp->lchild;
			}
			else if(temp->data < no)
			{
				if(temp->rchild == NULL)
				{
					temp->rchild = newn;
					break;
				}
				temp = temp->rchild;
			}
		}
	}
}

bool Search(PNODE Head, int no)
{
	if(Head == NULL)
	{
		return false;
	}
	else
	{
		while(Head != NULL)
		{
			if(Head->data == no)	//node sapadala
			{
				break;
			}
			else if(no < (Head->data))
			{
				Head = Head->lchild;
			}
			else if(no > (Head->data))
			{
				Head = Head->rchild;
			}
		}
		if(Head == NULL)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

int main()
{
	PNODE first = NULL;
	int i = 0;
	bool bRet = false; 
	
	Insert(&first, 51);
	Insert(&first, 21);
	Insert(&first, 101);
	
	cout << "Enter Data to Search : \n";
	cin >> i;
	
	bRet = Search(first, i);
	if(bRet == true)
	{
		cout << "Data is there\n";
	}
	else
	{
		cout << "Data is not there\n";
	}
	
	return 0;
}