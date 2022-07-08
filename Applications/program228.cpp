#include<iostream>
using namespace std;

void DisplayI(int iNo)
{
	int iCnt = 1;
	while(iCnt <= iNo)
	{
		cout << "Marvellous\n";
		iCnt++;
	}
}

void DisplayR()
{
	static int iCnt = 1;
	
	if(iCnt <= 4)
	{
		cout << "Marvellous\n";
		iCnt++;
		
		DisplayR();
	}
}

int main()
{
	int iValue = 0;
	
	cout << "Enter Value : \n";
	cin >> iValue;
	
	DisplayI(iValue);
	//DisplayR();
	
	return 0;
}