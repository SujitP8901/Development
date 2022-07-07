#include <stdio.h>

int Display(int);		//Declaration

int Display(int iValue)	//Defination
{
	int iCnt = 0, iSum = 0;
	
	//		1			2			3
	for(iCnt = 1; iCnt <= iValue; iCnt++)
	{
		iSum = iSum + iCnt;		// 4
	}
	return iSum;
}

int main()
{
	int iNo = 0, iRet = 0;
	printf("Enter Number:\n");
	scanf("%d", &iNo);
	
	iRet = Display(iNo);

	printf("Addition is : %d\n",iRet);
	return 0;
}
