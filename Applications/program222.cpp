//	DoublyLL Generic Program
#include<iostream>
using namespace std;

template <typename T>
struct Dnode
{
	T data;
	struct Dnode* next;
	struct Dnode* prev;
};

template <class T>
class DoublyLL
{
private : 
	Dnode <T>* first;
	int size;
	
public :
	DoublyLL();
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
DoublyLL<T> :: DoublyLL()
{
	first = NULL;
	size = 0;
}

template <class T>
void DoublyLL<T> :: InsertFirst(T no)
{
	Dnode<T> * newn = new Dnode <T>;
	
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

template <class T>
void DoublyLL<T> :: InsertLast(T no)
{
	Dnode<T> * newn = new Dnode <T>;
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if(first == NULL)
	{
		first = newn;
	}
	else
	{
		Dnode<T> * temp = first;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
		newn->prev = temp;
	}
	size++;
}

template <class T>
void DoublyLL<T> :: InsertAtPos(T no, int pos)
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
		Dnode<T> * temp = first;
		Dnode<T> * newn = new Dnode <T>;
		
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

template <class T>
void DoublyLL<T> :: DeleteFirst()
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

template <class T>
void DoublyLL<T> :: DeleteLast()
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
		Dnode<T> * temp = first;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->prev->next = NULL;
		delete temp;
	}
	size--;
}

template <class T>
void DoublyLL<T> :: DeleteAtPos(int pos)
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
		Dnode<T> * temp = first;
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

template <class T>
void DoublyLL<T> :: Display()
{
	Dnode<T> * temp = first;
	while(temp != NULL)
	{
		cout << "|" << temp->data << "| -> ";
		temp = temp->next;
	}
	cout << "NULL\n";
}

template <class T>
int DoublyLL<T> :: Count()
{
	return size;
}

int main()
{
	int iret = 0;
	DoublyLL <char> cobj;
    
    cobj.InsertFirst('A');
    cobj.InsertFirst('B');
    cobj.InsertFirst('C');
    
    cobj.InsertLast('D');
    cobj.InsertLast('E');
    
    cobj.Display();
    
    iret = cobj.Count();
    cout<<"Number of elemensts are : "<<iret<<"\n";
	
///////////////////////////////////////////////////
    
	DoublyLL <int> iobj;
    
    iobj.InsertFirst(11);
    iobj.InsertFirst(21);
    iobj.InsertFirst(51);
    
    iobj.InsertLast(101);
    iobj.InsertLast(151);
    iobj.Display();
    
    iret = iobj.Count();
    cout<<"Number of elemensts are : "<<iret<<"\n";
	
    return 0;
}

