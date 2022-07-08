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

void DisplayR(int iNo)
{
	static int iCnt = 1;
	if(iCnt <= iNo)
	{
		cout << "Marvellous\n";
		iCnt++;
		
		DisplayR(iNo);
	}
}

int main()
{
	int iValue = 0;
	
	cout << "Enter Value : \n";
	cin >> iValue;
	
	//DisplayI(iValue);
	DisplayR(iValue);
	
	return 0;
}