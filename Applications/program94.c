#include<stdio.h>

int SpaceCount(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[50];
	int iRet = 0;
	printf("Enter String : \n");
	scanf("%[^\n]s", Arr);
	
	iRet = SpaceCount(Arr);
	printf("Count of WhiteSpace is : %d",iRet);
	
	return 0;
}