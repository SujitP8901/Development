// Accept number count no of digits which are greater than or equal to 5

//	Input : 127894
//	Output : 3

//	Input : 561750
//	Output : 4

#include<stdio.h>

int Count(int iNo)
{
	int iCnt = 0, iDigit = 0;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit >= 5)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter Number :\n");
	scanf("%d",&iValue);
	
	iRet = Count(iValue);
	
	printf("Digits greater than or equal to 5 are : %d",iRet);
	return 0;
}