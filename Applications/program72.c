//Accept N numbers and a number from user and return index of that number for last Occurance

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LastOccur(int Arr[], int iLength, int iNo)
{
	int i = 0;
	for(i = iLength - 1; i >= 0 ; i--)
	{
		if(Arr[i] == iNo)
		{
			break;
		}
	}
	
	return i;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
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
	
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	iRet = LastOccur(ptr, iSize, iValue);
	
	if(iRet != -1)
	{
		printf("Number is Present (Last Occurance) at index %d",iRet);
	}
	else{
		printf("%d",iRet);
	}
	
	free(ptr);
	return 0;
}