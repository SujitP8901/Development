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
	int iRet = 0;
	iRet = SumFactors(iNumber);
	if(iRet == iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int SumFactors(int iNo)
{
	int iSum = 0, iCnt = 0;
	
	if(iNo < 0)			//Updater
	{
		iNo = -iNo;
	}
	
	//		1			2			3
	for(iCnt = 1; iCnt <= iNo/2; iCnt++)
	{
		if((iNo % iCnt) == 0)	//	4
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

