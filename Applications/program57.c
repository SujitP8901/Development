//	Accept 5 numbers from user and calculate its addition 
// Using Complete Pointer
#include<stdio.h>

int Addition(int *Brr,int iSize)		//Brr act as Pointer
{
	int iSum = 0, iCnt = 0;
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		iSum = iSum + (*Brr);
		Brr++;
	}
	return iSum;
}

int main()
{
	int Arr[5]; // Array of 5 integers
	int iRet = 0, iCnt = 0;
	
	printf("Enter Numbers: \n");
	
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	//Addition(Base Address of Array)
	
	iRet = Addition(Arr, 5);   
	printf("Addition is : %d\n",iRet);
	
	return 0; 
} 