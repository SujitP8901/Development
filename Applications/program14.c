// Display Factors of user given no
#include <stdio.h>

void DisplayFactors(int );

int main()
{
	int iNo = 0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	DisplayFactors(iNo);
	
	return 0;
}


void DisplayFactors(int iValue)
{
	int iCnt = 0;		// loop counter
	
	if(iValue < 0)		// Updater
	{
		iValue = -iValue;
	}
	
	for(iCnt = 1; iCnt < iValue; iCnt++)
	{
		if((iValue % iCnt) == 0)	// iCnt is factor
		{
			printf("%d\n",iCnt);
		}
	}
}