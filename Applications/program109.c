// check whether 7th and 12th bit is ON or OFF


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0x00000840;	//0000 0000 0000 0000 0000 1000 0100 0000
								//0		0	0		0	0	8	  4		0
								//0x00000840
	UINT iResult = 0;
	
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
	UINT iValue = 0;
	bool bRet = false;
	
	printf("Enter Number : \n");
	scanf("%d", &iValue);
	
	bRet = CheckBit(iValue);
	
	if(bRet == true)
	{
		printf("7th and 12th bits is ON");
	}
	else
	{
		printf("Bits are OFF");
	}
	
	
	return 0;
}