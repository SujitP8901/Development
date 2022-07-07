// Accept two numbers and display its power
#include<stdio.h>
int Power(int , int );
int main()
{
	int iFirst = 0, iSecond = 0, iRet = 0;
	printf("Enter First Number : \n");
	scanf("%d",&iFirst);
	
	printf("Enter Second Number : \n");
	scanf("%d",&iSecond);
	
	iRet = Power(iFirst, iSecond);
	
	printf("%d raied to %d is : %d", iFirst, iSecond, iRet);
	
	return 0;
}

int Power(int iNo1, int iNo2)
{
	if(iNo2 < 0 )
	{
		iNo2 = -iNo2;
	}
	
	int iCnt = 0, iAns = 1;
	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		iAns = iAns * iNo1;
	}
	return iAns;
}
