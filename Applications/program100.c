//check palindrome or not (Case Insensitive)

#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome(char *start)
{
	char *end = start;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		if((*start - *end != 32) || (*start - *end != -32))
		{
			break;
		}
		start++;
		end--;
	}
	
	if(start < end)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	char Arr[30];
	bool bRet = true;
	
	printf("Enter Character : \n");
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