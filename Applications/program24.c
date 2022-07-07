// Accept number and Check whether no is palindrome or not
#include<stdio.h>
#include<stdbool.h>
bool ChkPalindrome(int );

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	bRet = ChkPalindrome(iValue);
	
	if(bRet == true)
	{
		printf("Number is Palindrome");
	}
	else{
		printf("Number is not Palindrome");
	}
	
	return 0;
}

bool ChkPalindrome(int iNo)
{
	int iOriginal = iNo;
	int iDigit = 0, iRev = 0;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
	}
	if(iOriginal == iRev)
	{
		return true;
	}
	else
	{
		return false;
	}
}