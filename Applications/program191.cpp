//	toggle bits of first and last nibble
#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT ToggleNibble(UINT iNo)
{
	UINT iMask = 0xF000000F;
	UINT iAns = 0, iCnt = 0, i = 0;
	
	iAns = iNo ^ iMask;
	
	return iAns;
}

int main()
{
	UINT iValue = 0, iRet = 0, iPos1 = 0, iPos2 = 0;
	
	cout << "Enter Number : \n";
	cin >> iValue;
	
	iRet = ToggleNibble(iValue);
	
	cout << "Number of ON Bits : " << iRet << "\n";
	
	return 0;
}