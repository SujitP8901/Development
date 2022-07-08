//	toggle bits of given positions
#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT ToggleBits(UINT iNo, int iPos1, int iPos2)
{
	if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
	{
		return 0;
	}
	UINT iMask1 = 0x00000001, iMask2 = 0x00000001, iMask = 0x00000000;
	int iAns = 0, iCnt = 0, i = 0;
	iMask1 = iMask1 << (iPos1 - 1);
	iMask2 = iMask2 << (iPos2 - 1);
	
	iMask = iMask1 | iMask2;
	
	iAns = iMask ^ iNo;
	
	return iAns;
	
}

int main()
{
	UINT iValue = 0, iRet = 0, iPos1 = 0, iPos2 = 0;
	
	cout << "Enter Number : \n";
	cin >> iValue;
	
	cout << "Enter Position 1 : \n";
	cin >> iPos1;
	
	cout << "Enter Position 2 : \n";
	cin >> iPos2;
	
	iRet = ToggleBits(iValue, iPos1, iPos2);
	
	cout << "Number of ON Bits : " << iRet << "\n";
	
	return 0;
}