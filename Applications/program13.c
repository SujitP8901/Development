#include <stdio.h>

int Factorial(int);		//Declaration

int Factorial(int iValue)	//Defination
{
	int iCnt = 0, iFact = 1;
	
	if(iValue < 0)		// Updater
	{
		iValue = -iValue;
	}
	
	/*
			1			2			3
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		iFact = iFact * iCnt;		// 4
	}
	*/
	
	iCnt = 1;					//1
	while(iCnt <= iValue)		//2
	{
		iFact = iFact * iCnt;	//4
		iCnt++;					//3
	}
	
	return iFact;
}

int main()
{
	int iNo = 0, iRet = 0;
	printf("Enter Number:\n");
	scanf("%d", &iNo);
	
	iRet = Factorial(iNo);

	printf("Factorial is : %d\n",iRet);
	return 0;
}