#include<iostream>
using namespace std;

//	Specific Function
void Swap(char *p, char *q)
{
	char temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

//	Generic Function
template<class T>
void SwapX(T *p, T *q)
{
	T temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	char x = 'A', y = 'B';
	
	SwapX(&x, &y);
	
	cout << "Value of X becomes : " << x << endl;
	cout << "Value of Y becomes : " << y << endl;
	
	int i = 11, j = 21;
	
	SwapX(&i, &j);
	
	cout << "Value of i becomes : " << i << endl;
	cout << "Value of j becomes : " << j << endl;
	
	return 0;
}