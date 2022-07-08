#include<iostream>
using namespace std;
typedef unsigned int UINT;
/*
	op1		op2		&		|		^
	 1		 0  	0		1		1
	 0		 1		0		1		1
	 0		 0		0		0		0
	 1		 1		1		1		0
*/

UINT ToggleBit(UINT iNo, int iPos)
{
	int iMask = 0x00000001, iAns = 0;
	
	if((iPos < 1) || (iPos > 32))
	{
		return 0;
	}
	iMask = iMask << (iPos - 1);
	
	iAns = iNo ^ iMask;
	
	return iAns;
}

int main()
{
	UINT iValue = 0, iRet = 0, iPos = 0;
	
	cout << "Enter Number : \n";
	cin >> iValue;
	
	cout << "Enter Position : \n";
	cin >> iPos;
	
	iRet = ToggleBit(iValue, iPos);
	
	cout << "Modified Number : " << iRet << "\n";
	
	return 0;
}