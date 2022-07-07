// Accept no and print table of that number
#include<stdio.h>
void DisplayTable(int );
int main()
{
	int iValue = 0;
	printf("Enter Number to display its table : \n");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	
	return 0;
}

void DisplayTable(int iNo)
{
	if(iNo == 0)
	{
		return;
	}
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	int iCnt = 0;
	for(iCnt = 1; iCnt <= 10; iCnt++)
	{
		printf("%d \n",iNo*iCnt);
	}
}