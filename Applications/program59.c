//Accept N numbers from user and return Average of all numbers

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iLength)
{
	float fResult = 0.0f;
	int iSum = 0, iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		iSum = iSum + Arr[iCnt];
	}
	
	fResult = (float)iSum / (float)iLength;	//Explicite type Casting
	
	return fResult;
}

int main()
{
	int iSize = 0, iCnt = 0;
	float fRet = 0.0f; 
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
	fRet = Average(ptr, iSize);
	
	printf("Average is : %.2f", fRet);
	
	free(ptr);
	return 0;
}