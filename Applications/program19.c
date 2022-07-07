#include<stdio.h>

int DigitCount(int );		

int main()	
{
	int iValue = 0, iRet = 0;

	printf("Enter Nnumber :\n");
	scanf("%d",&iValue);
	
	iRet = DigitCount(iValue);	
	printf("Count of Digits is : %d\n",iRet);
	
	return 0;
}

int DigitCount(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
	
	if(iNo == 0)	//	Filter
	{
		return 1;
	}
	
	if(iNo < 0)		// INPUT UPDATER
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iCnt++;
		iNo = iNo / 10;
	}
	return iCnt;
}