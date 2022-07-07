//Accept N numbers from user and return difference between max and min value

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	int iMin = 0, iMax = 0, iCnt = 0, i = 0;
	iMin = Arr[0];
	iMax = Arr[0];
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i] < iMin)
		{
			iMin = Arr[i];
		}
		if(Arr[i] > iMax)
		{
			iMax = Arr[i];
		}
	}
	return (iMax - iMin);
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0, iNo = 0;
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
	
	iRet = Difference(ptr, iSize);
	
	printf("Difference is : %d", iRet);
	
	free(ptr);
	return 0;
}