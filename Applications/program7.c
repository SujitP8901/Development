#include <stdio.h>

void Display(int);

int main()
{
	int iNo = 0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	Display(iNo);	//Function Call
	
	return 0;
}

void Display(int iValue)
{
	int i = 0;
	for(i = 1; i <= iValue; i++)
	{
		printf("Marvellous \n");
	}
}