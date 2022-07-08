#include<iostream>

using namespace std;

typedef struct node
{
	int data;
	struct node* lchild;
	struct node* rchild;
}NODE, *PNODE;

class BST
{
private :
	PNODE first;
	int size;
	
public :
	BST()
	{
		first = NULL;
		size = 0;
	}
	
	void Insert(int no)
	{
		PNODE newn = new NODE;
		
		newn->data = no;
		newn->lchild = NULL;
		newn->rchild = NULL;
		
		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			PNODE temp = first;
			
			while(1)
			{
				if(temp->data == no)
				{
					cout << "Same Data is Present\n";
					delete newn;
					
					break;
				}
				else if(no < (temp->data))
				{
					if(temp->lchild == NULL)
					{
						temp->lchild = newn;
						break;
					}
					temp = temp->lchild;
				}
				else
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
		size++;
	}
	
	bool Search(int no)
	{
		PNODE temp = first;
		bool bFlag = false;
		
		if(first == NULL)
		{
			return bFlag;
		}
		else
		{
			while(temp != NULL)
			{
				if((temp->data) == no)
				{	
					bFlag = true;
					break;
				}
				else if(no < (temp->data))
				{
					temp = temp->lchild;
				}
				else if(no > (temp->data))
				{
					temp = temp->rchild;
				}
			}
		}
		return bFlag;
	}
	
	int Count()
	{
		return size;
	}
	
	int CountLeaf()
	{
		static int iCnt = 0;
		static PNODE temp = first;
		PNODE temp2 = temp;
		if(temp2 != NULL)
		{
			if((temp2->lchild == NULL) && (temp2->rchild == NULL))
			{
				iCnt++;
			}
			temp = temp->lchild;
			CountLeaf();
			temp = temp->rchild;
			CountLeaf();
		}
		
		return iCnt;
	}
	
};

int main()
{
	BST obj;
	bool bRet = false;
	int iValue = 0, iRet = 0;
	
	obj.Insert(51);
	obj.Insert(21);
	obj.Insert(101);
	
	cout << "Enter Element to Search : \n";
	cin >> iValue;
	
	bRet = obj.Search(iValue);
	if(bRet == true)
	{
		cout << "Element is there\n";
	}
	else
	{
		cout << "Element is not there\n";
	}	
	
	iRet = obj.Count();
	cout << "Number of Nodes : " << iRet << endl;
	
	iRet = obj.CountLeaf();
	cout << "Number of Leaf Nodes : " << iRet << endl;
	
	return 0;
}