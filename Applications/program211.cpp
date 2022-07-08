// Stack
#include<iostream>

using namespace std;

typedef struct node
{
	int data;
	struct node* next;
}NODE, *PNODE;

class Stack
{
private :
	PNODE first;
	int size;
	
public :
	Stack();
	void push(int );
	int pop();
	void Display();
	int Count();
};

Stack :: Stack()
{
	first = NULL;
	size = 0;
}

void Stack :: push(int no)
{
	PNODE newn = new NODE;
	
	newn->data = no;
	newn->next = NULL;
	
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

void Stack :: Display()
{
	PNODE temp = first;
	
	while(temp != NULL)
	{
		cout << temp->data << "\t";
		temp = temp->next;
	}
	cout << endl;
}

int Stack :: pop()
{
	int iPop = 0;
	
	if(first == NULL)
	{
		return -1;
	}
	else 
	{
		PNODE temp = first;
		iPop = first->data;
		
		first = first->next;
		delete temp;
	}
	size--;
	return iPop;
}

int Stack :: Count()
{
	return size;
}

int main()
{
	Stack obj;
		
	int iValue = 0, iChoice = 1, iRet = 0;
	
	while(iChoice != 0)
	{
		cout << "_______________________________________________________________" << endl;
		cout << "Enter the Operation that you want to do on Stack :" << endl;
		cout << "1 : Push the Element" << endl;
		cout << "2 : Pop the Element" << endl;
		cout << "3 : Display the Contents of Stack" << endl;
		cout << "4 : Count Number of Elements in the Stack" << endl;
		cout << "0 : Terminate the Application" << endl;
		cout << "_______________________________________________________________" << endl;
		cin >> iChoice;
		
		switch(iChoice)
		{
			case 1 :
				cout << "Enter Value : " << endl;
				cin >> iValue;
				
				obj.push(iValue);
				break;
				
			case 2 :
				iRet = obj.pop();
				if(iRet != -1)
				{
					cout << "Element Popped : " << iRet << endl;
				}
				else
				{
					cout << "Stack is Empty" << endl;
				}
				break;
				
			case 3 :
				obj.Display();
				break;
				
			case 4 :
				iRet = obj.Count();
				cout << "Number of Elements : " << iRet << endl;
				break;
				
			case 0 :
				cout << "Thank You for Accessing Marvellous Stack" << endl;
				break;
				
			default : 
				cout << "Enter Valid Choice" << endl;
				break;
		}
	}
	
	return 0;
}