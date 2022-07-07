// Accept number and return sum of even digits
#include<stdio.h>

int EvenSum(int iNo)
{
	int iSum = 0, iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
		{
			iSum = iSum + iDigit;
		}
		iNo = iNo / 10;
	}
	return iSum;
}

int main()
{
	int iValue = 0, iRet = 0;
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	iRet = EvenSum(iValue);
	printf("Sum of Even Digits is : %d",iRet);
	return 0;
}