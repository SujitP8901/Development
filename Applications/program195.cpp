//Byte Slicing
#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT SwapByte(UINT iNo)
{
	UINT iResult = 0;
	UINT iMask = 0x00FFFF00;
	
	UINT iTemp = iNo & iMask;
	
	UINT Byte1 = iNo << 24;
	UINT Byte2 = iNo >> 24;
	
	iResult = iTemp | Byte1 | Byte2;
	
	return iResult;
	
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