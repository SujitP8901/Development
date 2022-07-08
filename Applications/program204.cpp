#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node* next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
private : 
	PNODE first;
	int size;
	
public :
	SinglyLL()
	{
		first = NULL;
		size = 0;
	}
	
	void InsertFirst(int no)
	{
		// step1 : allocating memory
		PNODE newn = new NODE;
		
		//step2 : Initialization
		newn->data = no;
		newn->next = NULL;
		
		//step3 : Insertion
		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			newn->next = first;
			first = newn;
		}
		size++;
	}
	
	void InsertLast(int no)
	{
		// step1 : allocating memory
		PNODE newn = new NODE;
		
		//step2 : Initialization
		newn->data = no;
		newn->next = NULL;
		
		//step3 : Insertion
		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			PNODE temp = first;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = newn;
		}
		size++;
	}
	
	void InsertAtPos(int no, int pos)
	{
		if((pos < 1) || (pos > size+1))
		{
			return;
		}
		
		if(pos == 1)
		{
			InsertFirst(no);
		}
		else if(pos == size+1)
		{
			InsertLast(no);
		}
		else
		{
			PNODE newn = new NODE;
			PNODE temp = first;
			int i = 0;
			
			newn->data = no;
			newn->next = NULL;
			
			for(i = 1; i < pos-1; i++)
			{
				temp = temp->next;
			}
			newn->next = temp->next;
			temp->next = newn;
		}
		size++;
	}
	
	void DeleteFirst()
	{
		PNODE temp = first;
		if(first != NULL)
		{
			first = first->next;
			delete temp;
			
			size--;
		}
		
	}
	
	void DeleteLast()
	{
		PNODE temp = first;
		
		if(first == NULL)
		{
			return;
		}
		else if(first->next == NULL)
		{
			delete first;
			first = NULL;
			size--;
		}
		else
		{
			while(temp->next->next != NULL)
			{
				temp = temp->next;
			}
			delete temp->next;
			temp->next = NULL;
			size--;
		}
	}
	
	void DeleteAtPos(int pos)
	{
		if((pos < 1) || (pos > size))
		{
			return;
		}
		
		if(pos == 1)
		{
			DeleteFirst();
		}
		else if(pos == size)
		{
			DeleteLast();
		}
		else 
		{
			int i = 0;
			PNODE temp = first;
			PNODE targeted = NULL;
			for(i = 1; i < pos-1; i++)
			{
				temp = temp->next;
			}
			targeted = temp->next;
			temp->next = targeted->next;
			delete targeted;
		}
		size--;
	}
	
	void Display()
	{
		PNODE temp = first;
		while(temp != NULL)
		{
			cout << "|" << temp->data << "| -> ";
			temp = temp->next;
		}
		cout << "NULL\n";
	}
	
	int Count()
	{
		return size;
	}
	
};

int main()
{
	SinglyLL obj;
	
	int iChoice = 1, iValue = 0 ,iPos = 0, iRet = 0;
	
	while(iChoice != 0)
	{
		cout << "___________________________________________________________________________\n";
		cout << "Enter the Choice of Operation that You want to do On LinkedList : \n";
		cout << "1 : Insert the node at First Position\n";
		cout << "2 : Insert the node at Last Position\n";
		cout << "3 : Insert the node at the Desired Position\n";
		cout << "4 : Delete the node at First Position\n";
		cout << "5 : Delete the node at Last Position\n";
		cout << "6 : Delete the node at Desired Position\n";
		cout << "7 : Display the contents of Doubly Linked List\n";
		cout << "8 : Count the number of Nodes\n";
		cout << "0 : Terminate the Application\n";
		cout << "___________________________________________________________________________\n";
		cin >> iChoice;
		
		switch(iChoice)
		{
			case 1 :
				cout << "Enter the value : \n";
				cin >> iValue;
				obj.InsertFirst(iValue);
				break;
				
			case 2 :
				cout << "Enter the value : \n";
				cin >> iValue;
				obj.InsertLast(iValue);
				break;
				
			case 3 :
				cout << "Enter the value : \n";
				cin >> iValue;
				
				cout << "Enter the Position : \n";
				cin >> iPos;
				
				obj.InsertAtPos(iValue, iPos);
				break;
				
			case 4 : 
				obj.DeleteFirst();
				break;
				
			case 5 :
				obj.DeleteLast();
				break;
				
			case 6 :
				cout << "Enter the Position : \n";
				cin >> iPos;
				
				obj.DeleteAtPos(iPos);
				break;
				
			case 7 : 
				obj.Display();
				break;
						
			case 8 :
				iRet = obj.Count();
				cout << "Number of Elements : " << iRet << "\n";
				break;
				
			case 0 :
				cout << "Thank You for Accessing Marvellous Singly Linked List\n";
				break;
				
			default :
				cout << "Invalid Choice\n";
				break;
		}
	}
	
	return 0;
}