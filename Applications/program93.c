#include<stdio.h>

void DisplayCount(char *str)
{
	int iCaptial = 0, iSmall = 0;
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCaptial++;
		}
		else if((*str >= 'a') && (*str <= 'z'))
		{
			iSmall++;
		}
		str++;
	}
	printf("Count of Capital Letters is : %d\n",iCaptial);
	printf("Count of Small Letters is : %d\n",iSmall);
}

int main()
{
	char Arr[20];
	
	printf("Enter String : \n");
	scanf("%[^\n]s", Arr);
	
	DisplayCount(Arr);
	
	return 0;
}