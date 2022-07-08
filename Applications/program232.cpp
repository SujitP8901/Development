#include<iostream>
using namespace std;

int SumNumbersI(int Brr[], int iSize)
{
	int iSum = 0, i = 0;
	
	for(i = 0; i < iSize; i++)
	{
		iSum = iSum + Brr[i];
	}
	
	return iSum;
}

int SumNumbersR(int Brr[], int iSize)
{
	static int iSum = 0;
	static int i = 0;
	if(i < iSize)
	{
		iSum = iSum + Brr[i];
		i++;
		SumNumbersR(Brr, iSize);
	}
	
	return iSum;
}

int main()
{
	int iLength = 0, i = 0;
	int * p = NULL;
	
	int iRet = 0;
	
	cout << "Enter Number of Elements : \n";
	cin >> iLength;
	
	p = new int[iLength];
	
	cout << "Enter Numbers : " << endl;
	for(i = 0; i < iLength; i++)
	{
		cin >> p[i];
	}
	
	iRet = SumNumbersR(p, iLength);
	cout << "Sum of Numbers : " << iRet << endl;
		
	delete []p;
	
	return 0;
}

