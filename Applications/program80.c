#include<stdio.h>

void Display(char *Brr)
{
	printf("%c\n",*Brr);
	Brr++;
	
	printf("%c\n",*Brr);
	Brr++;
	
	printf("%c\n",*Brr);
	Brr++;
	
	printf("%c\n",*Brr);
	Brr++;
	
	printf("%c\n",*Brr);
	Brr++;
}


int main()
{
	char Arr[50];
	
	printf("Enter Your Name : \n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);	//Display(Base Address of Array)
	
	return 0;
}