//Accept N numbers and a number from user and check whether that number is present or not 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iLength, int iNo)
{
	int i = 0;
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i] == iNo)
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
	int iSize = 0, iCnt = 0, iValue = 0;
	bool bRet = false; 
	int* ptr = NULL;
	
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
	
	printf("Enter Number to search : \n");
	scanf("%d",&iValue);
	
	bRet = CheckNumber(ptr, iSize, iValue);
	
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