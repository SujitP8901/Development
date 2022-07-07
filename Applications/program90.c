#include<stdio.h>

char CharToggle(char c)
{
	if((c >= 'A') && (c <= 'Z'))
	{
		return c + 32;
	}
	else if((c >= 'a') && (c <= 'z'))
	{
		return c-32;
	}
}

int main()
{
	char ch = '\0', cRet = '\0';
	printf("Enter Character : \n");
	scanf("%c", &ch);
	
	cRet = CharToggle(ch);
	
	printf("Toggled letter is : %c",cRet);
	
	return 0;
}