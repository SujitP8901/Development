//Accept N numbers from user and Count Even Numbers from it

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
	int iEven = 0, iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			iEven++;
		}
	}
	return iEven;
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
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
	
	printf("Entered Data is : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("%d\t", ptr[iCnt]);
	}
	printf("\n");
	iRet = CountEven(ptr, iSize);
	
	printf("Count of Even Numbers are : %d", iRet);
	
	free(ptr);
	return 0;
}