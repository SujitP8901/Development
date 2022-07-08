//	Accept string and reverse that string(inplace)
// User Defined srrev() function

#include<stdio.h>

void strrevX(char *start)
{
	char *end = start;
	
	char temp;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}

int main()
{
	char Arr[30];
	
	printf("Enter String : \n");
	scanf("%[^'\n']s", Arr);
	
	strrevX(Arr);
	
	printf("Reverse String is : %s", Arr);
	
	return 0;
}
