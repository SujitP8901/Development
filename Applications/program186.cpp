#include<iostream>

using namespace std;

class Marvellous
{
public : 
	int Addition(int x, int y)
	{
		int iAns = 0;
		iAns = x + y;
		return iAns;
	}
};

int main()
{
	int iNo1 = 0, iNo2 = 0, iSum = 0;
	Marvellous mobj;
	
	cout << "Enter First Number : \n";
	cin >> iNo1;
	
	cout << "Enter Second Number : \n";
	cin >> iNo2;
	
	iSum = mobj.Addition(iNo1, iNo2);
	
	cout << "Addition is : " << iSum << "\n";
	
	return 0;
}