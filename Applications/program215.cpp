n#include<iostream>
using namespace std;

void Swap(char *p, char *q)
{
	char temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	char x = '\0', y = '\0';
	
	cout << "Enter first Character\n";
	cin >> x;
	
	cout << "Enter second Character\n";
	cin >> y;
	
	Swap(&x, &y);
	
	cout << "Value of X becomes : " << x << endl;
	cout << "Value of Y becomes : " << y << endl;
	
	return 0;
}