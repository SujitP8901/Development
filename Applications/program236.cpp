#include<iostream>
#include<stdio.h>
using namespace std;
int CountCapitalI(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int CountCapitalR(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
		CountCapitalR(str);
	}
	
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	cout << "Enter String : \n";
	scanf("%[^'\n']s", Arr);
	
	iRet = CountCapitalR(Arr);
	cout << "Length is : " << iRet << endl; 
	
	return 0;
}
