//	count number of on bits (without using % And /)
#include<iostream>
using namespace std;
typedef unsigned int UINT;


int CountON(UINT iNo)
{
	UINT iMask = 0x00000001;
	int iAns = 0, iCnt = 0, i = 0;
	
	//while(iNo != 0)
	//{
	//	iAns = iNo & iMask;
	//	if(iAns == iMask)
	//	{
	//		iCnt++;
	//	}
	//	iNo = iNo >> 1;
	//}
	
	for(i = 1; i < 32; i++)
	{
		iAns = iMask & iNo;
		if(iAns == iMask)
		{
			iCnt++;
		}
		iMask = iMask << 1;
	}
	
	return iCnt;
}

int main()
{
	UINT iValue = 0, iRet = 0, iPos = 0;
	
	cout << "Enter Number : \n";
	cin >> iValue;
	
	iRet = CountON(iValue);
	
	cout << "Number of ON Bits : " << iRet << "\n";
	
	return 0;
}