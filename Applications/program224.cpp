#include<iostream>
using namespace std;

template<typename T>
struct node
{
	T data;
	struct node* next;
	struct node* prev;
};

template<class T>
class DoublyCL
{
private :
	node <T> * first;
	node <T> * last;
	int size;
	
public : 
	DoublyCL();
	void Display();
	int Count();
	void InsertFirst(T );
	void InsertLast(T );
	void InsertAtPos(T , int iPos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int iPos);
};

template<class T>
DoublyCL <T> :: DoublyCL()
{
	first = NULL;
	last = NULL;
	size = 0;
}

template<class T>
void DoublyCL <T> :: InsertFirst(T no)
{
	node <T> * newn = new node <T>;
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((first == NULL) && (last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		newn->next = first;
		first->prev = newn;
		first = newn;
	}
	
	last->next = first;
	first->prev = last;
	
	size++;
}

template<class T>
void DoublyCL <T> :: InsertLast(T no)
{
	node <T> * newn = new node <T>;
	
	newn->data = no;
	newn->next = NULL;
	newn->prev = NULL;
	
	if((first == NULL) && (last == NULL))
	{
		first = newn;
		last = newn;
	}
	else
	{
		last->next = newn;
		newn->prev = last;
		last = newn;
	}
	
	last->next = first;
	first->prev = last;
	
	size++;
}

template<class T>
void DoublyCL <T> :: InsertAtPos(T no, int iPos)
{
	if((iPos < 1) && (iPos > size+1))
	{
		return;
	}
	
	if(iPos == 1)
	{
		InsertFirst(no);
	}
	else if(iPos == size)
	{
		InsertLast(no);
	}
	else
	{
		node <T> * temp = first;
		node <T> * newn = new node <T>;
	
		newn->data = no;
		newn->next = NULL;
		newn->prev = NULL;
		
		for(int i = 1; i < iPos-1; i++)
		{
			temp = temp->next;
		}
		newn->next = temp->next;
		newn->next->prev = newn;
		
		temp->next = newn;
		newn->prev = temp;
		size++;
	}
	
}

template<class T>
void DoublyCL <T> :: Display()
{
	node <T> * temp = first;
	
	for(int i = 1; i <= size; i++)
	{
		cout << "|" << temp->data << "| -> ";
		temp = temp->next;
	}
	cout << "\n";
}

template<class T>
int DoublyCL <T> :: Count()
{
	return size;
}

template<class T>
void DoublyCL <T> :: DeleteFirst()
{
	if((first == NULL) && (last == NULL))
	{
		return;
	}
	else if(first == last)
	{
		delete first;
		first = NULL;
		last = NULL;
	}
	else
	{
		first = first->next;
		delete last->next;
		
		last->next = first;
		first->prev = last;
	}
	size--;
}

template<class T>
void DoublyCL <T> :: DeleteLast()
{
	if((first == NULL) && (last == NULL))
	{
		return;
	}
	else if(first == last)
	{
		delete first;
		first = NULL;
		last = NULL;
	}
	else
	{
		last = last->prev;
		delete last->next;
		
		last->next = first;
		first->prev = last;
	}
	size--;
}

template<class T>
void DoublyCL <T> :: DeleteAtPos(int iPos)
{
	if((iPos < 1) && (iPos > size))
	{
		return;
	}
	
	if(iPos == 1)
	{
		DeleteFirst();
	}
	else if(iPos == size)
	{
		DeleteLast();
	}
	else
	{
		node <T> * temp = first;
		for(int i = 1; i < iPos-1; i++)
		{
			temp = temp->next;
		}
		
		temp->next = temp->next->next;
		delete temp->next->prev;
		temp->next->prev = temp;
		
		size--;
	}
}

int main()
{
	int iRet = 0;	
	DoublyCL <int> obj;

	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.InsertLast(51);
	obj.InsertLast(101);
	
	obj.InsertAtPos(75, 3);
	obj.Display();
	
	iRet = obj.Count();
	cout << "Number of Elements : " << iRet << endl;

	obj.DeleteAtPos(3);
	obj.DeleteFirst();
	obj.DeleteLast();
	
	obj.Display();
	
///////////////////////////////////////////////////////////////////////////////

	DoublyCL <char> cobj;
	
	cobj.InsertFirst('A');
	cobj.InsertFirst('B');
	
	cobj.InsertLast('C');
	cobj.InsertLast('D');
	
	cobj.InsertAtPos('E', 3);
	cobj.Display();
	
	iRet = cobj.Count();
	cout << "Number of Elements : " << iRet << endl;

	cobj.DeleteAtPos(3);
	cobj.DeleteFirst();
	cobj.DeleteLast();
	
	cobj.Display();
	
	return 0;
}