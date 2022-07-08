//

#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome(char *str)
{
	char *start = NULL;
	char *end = NULL;
	bool flag = true;
	
	start = str;
	end = str;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		if(*start != *end)
		{
			flag = false;
			break;
		}
		start++;
		end--;
	}
	
	return flag;
}

int main()
{
	char Arr[30];
	bool bRet = false;
	
	printf("Enter String : \n");
	scanf("%[^'\n']s", Arr);
	
	bRet = ChkPalindrome(Arr);
	
	if(bRet == true)
	{
		printf("It is Palindrome");
	}
	else
	{
		printf("It is not Palindrome");
	}
	return 0;
}