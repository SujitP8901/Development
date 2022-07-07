//Accept N numbers from user and return Largest Number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
	int iMax = 0, iCnt = 0, i = 0;
	iMax = Arr[0];
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i] > iMax)
		{
			iMax = Arr[i];
		}
	}
	return iMax;
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
	
	iRet = Maximum(ptr, iSize);
	
	printf("Maximum is : %d", iRet);
	
	free(ptr);
	return 0;
}