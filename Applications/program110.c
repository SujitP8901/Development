// check whether First four bits is ON or OFF


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iMask = 0x0000000f;	//0000 0000 0000 0000 0000 0000 0000  ffff
								//0		0	0		0	0	0	 0	   	f
								//0x0000000f
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
		printf("first four bits are ON");
	}
	else
	{
		printf("Bits are OFF");
	}
	
	
	return 0;
}