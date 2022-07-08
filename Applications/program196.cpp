//Byte Slicing
#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT SwapByte(UINT iNo)
{
	return ((iNo & 0x00FFFF00) | (iNo << 24) | (iNo >> 24));
}

int main()
{
	UINT iValue = 0, iRet = 0, iPos1 = 0, iPos2 = 0;
	
	cout << "Enter Number : \n";
	cin >> iValue;
	
	iRet = SwapByte(iValue);
	
	cout << "Modified Number is : " << iRet;
	return 0;
}