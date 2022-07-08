// Accept number and and bit number check whether that bit is ON or OFF

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
	UINT iMask = 0x00000001;
	UINT iResult = 0;
	
	if((iPos < 1) || (iPos > 32))
	{
		return false;
	}
	
	iMask = iMask << (iPos-1);
	iResult = iNo & iMask;
	
	if(iMask == iResult)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	UINT iValue = 0, iBit = 0;
	bool bRet = false;
	
	printf("Enter Number : \n");
	scanf("%d", &iValue);
	
	printf("Enter Position : \n");
	scanf("%d",&iBit);
	
	bRet = CheckBit(iValue, iBit);
	
	if(bRet == true)
	{
		printf("Bit is ON");
	}
	else
	{
		printf("Bit is OFF");
	}
	
	
	return 0;
}