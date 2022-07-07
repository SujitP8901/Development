#include<stdio.h>

int DigitAddition(int );		

int main()	
{
	int iValue = 0, iRet = 0;

	printf("Enter Nnumber :\n");
	scanf("%d",&iValue);
	
	iRet = DigitAddition(iValue);	
	printf("Addition of Digits is : %d\n",iRet);
	
	return 0;
}

int DigitAddition(int iNo)
{
	int iDigit = 0;
	int iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
	}
	return iSum;
}