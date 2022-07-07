#include<stdio.h>

int SmallCount(char *str)
{
	int iSmall = 0;
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iSmall++;
		}
		str++;
	}
	return iSmall;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter String : \n");
	scanf("%[^\n]s", Arr);
	
	iRet = SmallCount(Arr);
	
	printf("Count of Small Letters is : %d",iRet);
	return 0;
}