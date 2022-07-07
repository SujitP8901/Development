#include<iostream>
#include<math.h>
using namespace std;

int decimalToBinary(int iNo)
{
    int ans = 0, i = 0;

    while(iNo != 0)
    {
        int iBit = iNo & 1;
        ans = (iBit * pow(10, i)) + ans;

        iNo = iNo >> 1;
        i++;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << decimalToBinary(n);
    return 0;
}