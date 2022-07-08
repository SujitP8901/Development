#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node* next;
	struct node* prev;
}NODE, *PNODE;

class DoublyLL
{
private : 
	PNODE first;
	int size;
	
public :

	DoublyLL()
	{
		first = NULL;
		size = 0;
	}
	
	void InsertFirst(int no)
	{
		PNODE newn = new NODE;
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		if(first == NULL)
		{
			first = newn;
		}
		else
		{
			newn->next = first;
			first->prev = newn;
			first = newn;
		}
		size++;
	}
	
	void InsertLast(int no)
	{
		PNODE newn = new NODE;
		
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
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
			newn->prev = temp;
		}
		size++;
	}
	
	void InsertAtPos(int no, int pos)
	{
		if((pos < 1) || (pos > size + 1))
		{
			cout << "Invalid Position\n";
			return;
		}
		
		if(pos == 1)
		{
			InsertFirst(no);
		}
		else if(pos == size + 1)
		{
			InsertLast(no);
		}
		else
		{
			int i = 0;
			PNODE temp = first;
			PNODE newn = new NODE;
			
			newn->data = no;
			newn->next = NULL;
			newn->prev = NULL;
			
			for(i = 1; i < pos-1; i++)
			{
				temp = temp->next;
			}
			newn->next = temp->next;
			temp->next->prev = newn;
			temp->next = newn;
			newn->prev = temp;
			size++;
		}
	}
	
	void DeleteFirst()
	{
		if(first == NULL)
		{
			return;
		}
		else if(first->next == NULL)
		{
			delete first;
			first = NULL;
		}
		else
		{
			first = first->next;
			delete first->prev;
			first->prev = NULL;
		}
		size--;
	}
	
	void DeleteLast()
	{
		if(first == NULL)
		{
			return;
		}
		else if(first->next == NULL)
		{
			delete first;
			first = NULL;
		}
		else
		{
			PNODE temp = first;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->prev->next = NULL;
			delete temp;
		}
		size--;
	}
	
	void DeleteAtPos(int pos)
	{
		if((pos < 1) || (pos > size))
		{
			cout << "Invalid Position\n";
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
			PNODE temp = first;
			int i = 0;
			
			for(i = 1; i < pos; i++)
			{
				temp = temp->next;
			}
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			
			delete temp;
			size--;
		}
		
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
	int iChoice = 1, iValue = 0 ,iPos = 0, iRet = 0;
	
	DoublyLL obj;
	
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
				cout << "Thank You for Accessing Marvellous Doubly Linked List\n";
				break;
				
			default :
				cout << "Invalid Choice\n";
				break;
		}
	}
	
	return 0;
}

