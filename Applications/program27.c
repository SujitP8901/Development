// Accept number and check whether no is perfect or not

#include<stdio.h>
#include<stdbool.h>

int SumFactors(int );
bool CheckPerfect(int );

int main()
{
	int iValue = 0;
	bool bRet = false;
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	bRet = CheckPerfect(iValue);
	
	if(bRet == true)
	{
		printf("Number is Perfect");
	}
	else
	{
		printf("Number is not Perfect");
	}
	
	return 0;
}

bool CheckPerfect(int iNumber)
{
	if(iNumber < 0)
	{
		iNumber = -iNumber;
	}
	int iSum = 0, iCnt = 0;
	for(iCnt = 1; iCnt <= iNumber/2; iCnt++)
	{
		if(iNumber % iCnt == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	
	if(iSum == iNumber)
	{
		return true;
	}
	else{
		return false;
	}
}