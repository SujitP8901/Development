//	Generic Program
#include<iostream>
using namespace std;

template <class T>
struct node
{
	T data;
	struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

template <class T>
class SinglyLL
{
private : 
	PNODE first;
	int size;
	
public :
	SinglyLL();
	void InsertFirst(T );
	void InsertLast(T );
	void InsertAtPos(T , int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int );
	void Display();
	int Count();
};

template <class T>
SinglyLL<T> :: SinglyLL()
{
	first = NULL;
	size = 0;
}

template <class T>
void SinglyLL<T> :: InsertFirst(T no)
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

template <class T>	
void SinglyLL<T> :: InsertLast(T no)
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

template <class T>	
void SinglyLL<T> :: InsertAtPos(T no, int pos)
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

template <class T>	
void SinglyLL<T> :: DeleteFirst()
{
	PNODE temp = first;
	if(first != NULL)
	{
		first = first->next;
		delete temp;
	
		size--;
	}	
}

template <class T>
void SinglyLL<T> :: DeleteLast()
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

template <class T>	
void SinglyLL<T> :: DeleteAtPos(int pos)
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

template <class T>	
void SinglyLL<T> :: Display()
{
	PNODE temp = first;
	while(temp != NULL)
	{
		cout << "|" << temp->data << "| -> ";
		temp = temp->next;
	}
	cout << "NULL\n";
}

template <class T>	
int SinglyLL<T> :: Count()
{
	return size;
}

int main()
{
	SinglyLL <int>obj;
	
	int iRet = 0;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	
	return 0;
}