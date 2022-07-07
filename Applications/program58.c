//	Accept 5 numbers from user and calculate its addition 
#include<stdio.h>
#include<stdlib.h>
int Addition(int Brr[])		//Brr act as Pointer
{
	int iSum = 0, iCnt = 0;
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		iSum = iSum + Brr[iCnt];
	}
	return iSum;
}

int main()
{
	int *Arr = NULL; 
	int iRet = 0, iCnt = 0, iLength = 0;
	
	printf("Enter Number of Elements:\n");
	scanf("%d",&iLength);
	
	//	Dynamic allocation of Array
	Arr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter Numbers: \n");
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	//Addition(Base Address of Array)
	iRet = Addition(Arr);   
	printf("Addition is : %d\n",iRet);
	
	//	Free the Memory 
	free(Arr);
	return 0; 
} 