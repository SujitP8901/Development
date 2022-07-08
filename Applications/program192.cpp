//	toggle bits in the Range
#include<iostream>
using namespace std;
typedef unsigned int UINT;


UINT ToggleRange(UINT iNo, int iStart, int iEnd)
{
	//UINT iMask1 = 0x00000001, iMask = 0;
	//UINT iAns = 0, i = 0;
	
	//for(i = iStart; i <= iEnd; i++)
	//{
	//	iMask1 = iMask1 << (i - 1);
	//	iMask = iMask | iMask1;
	//	iMask1 = 0x00000001;
	//}
	
	//iAns = iNo ^ iMask;
	//return iAns;
	
	
	UINT iMask1 = 0xFFFFFFFF, iMask2 = 0xFFFFFFFF, iMask = 0;
	UINT iResult = 0;
	
	iMask1 = iMask1 << (iStart - 1);
	iMask2 = iMask2 >> (32 - iEnd);
	
	iMask = iMask1 & iMask2;
	
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	UINT iValue = 0, iRet = 0, iPos1 = 0, iPos2 = 0;
	
	cout << "Enter Number : \n";
	cin >> iValue;
	
	cout << "Enter Starting Position : \n";
	cin >> iPos1;
	
	cout << "Enter Ending Position : \n";
	cin >> iPos2;
	
	iRet = ToggleRange(iValue, iPos1, iPos2);
	
	cout << "Number of ON Bits : " << iRet << "\n";
	
	return 0;
}