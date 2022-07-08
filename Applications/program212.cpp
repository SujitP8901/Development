//	Queue
#include<iostream>

using namespace std;

typedef struct node
{
	int data;
	struct node* next;
}NODE, *PNODE;

class Queue
{
private : 
	PNODE first;
	int size;
	
public :
	Queue();
	void Enqueue(int );
	int Dequeue();
	void Display();
	int Count();
};

Queue :: Queue()
{
	first = NULL;
	size = 0;
}

void Queue :: Enqueue(int no)
{
	PNODE newn = new NODE;
	
	newn->data = no;
	newn->next = NULL;
	
	if(first == NULL)	// (size==0)
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

int Queue :: Dequeue()
{
	int iDequeue = 0;
	PNODE temp = first;
	
	if(first != NULL)
	{
		iDequeue = first->data;
		first = first->next;
		delete temp;
		size--;
		return iDequeue;
	}
	else
	{
		return -1;
	}
}

void Queue :: Display()
{
	PNODE temp = first;
	for(int i = 0; i <= size; i++, temp = temp->next)
	{
		cout << "|" << temp->data << "| -> ";
	}
	cout << "\n";
}

int Queue :: Count()
{
	return size;
}

int main()
{
	Queue obj;
		
	int iValue = 0, iChoice = 1, iRet = 0;
	
	while(iChoice != 0)
	{
		cout << "_______________________________________________________________" << endl;
		cout << "Enter the Operation that you want to do on Queue :" << endl;
		cout << "1 : Enqueue the Element" << endl;
		cout << "2 : Dequeue the Element" << endl;
		cout << "3 : Display the Contents of Queue" << endl;
		cout << "4 : Count Number of Elements in the Queue" << endl;
		cout << "0 : Terminate the Application" << endl;
		cout << "_______________________________________________________________" << endl;
		cin >> iChoice;
		
		switch(iChoice)
		{
			case 1 :
				cout << "Enter Value : " << endl;
				cin >> iValue;
				
				obj.Enqueue(iValue);
				break;
				
			case 2 :
				iRet = obj.Dequeue();
				if(iRet != -1)
				{
					cout << "Element Dequeued : " << iRet << endl;
				}
				else
				{
					cout << "Queue is Empty" << endl;
				}
				break;
				
			case 3 :
				cout << "Elements in the Queue : " << endl;
				obj.Display();
				break;
				
			case 4 :
				iRet = obj.Count();
				cout << "Number of Elements : " << iRet << endl;
				break;
				
			case 0 :
				cout << "Thank You for Accessing Marvellous Queue" << endl;
				break;
				
			default : 
				cout << "Enter Valid Choice" << endl;
				break;
		}
	}
	
	return 0;
}