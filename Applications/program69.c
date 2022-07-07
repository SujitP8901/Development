//Accept N numbers and a number from user and check whether that 11 is present or not 
// 	According to industrial Standards
//	without using that bAns Variable
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iLength)
{
	int i = 0;
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i] == 11)
		{
			break;
		}
	}
	if(i == iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int iSize = 0, iCnt = 0, iNo = 0;
	int* ptr = NULL;
	bool bRet = false;
	
	printf("Enter Number of Elements : \n");
	scanf("%d",&iSize);
	
	
	ptr = (int *)malloc(sizeof(int) * iSize);

	if(ptr == NULL)
	{
		printf("Unable to allocate Memory\n");
		return -1;
	}
	
	printf("Enter Elements : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d", &ptr[iCnt]);
	}
	
	printf("Entered Data is : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("%d\t", ptr[iCnt]);
	}
	printf("\n");
	
	bRet = CheckNumber(ptr, iSize);
	
	if(bRet == true)
	{
		printf("Number is Present");
	}
	else{
		printf("Number is not Present");
	}
	
	free(ptr);
	return 0;
}