// Accept number from user and check number is Amstrom number or not
//153 = (1)^3 + (5)^3 + (3)^3
//	where 3 is number of digits in that number

import java.util.*;

class Marvellous
{
	public boolean CheckArmstrong(int iNo)
	{
		int iDigit = 0, iDigitCnt = 0, iCnt = 0;
		int iTemp = 0, iPower = 1, iSum = 0;
		
		if(iNo < 0)		//updater
		{
			iNo = -iNo;
		}
		
		iTemp = iNo;
		
		while(iTemp != 0)
		{
			iDigitCnt++;
			iTemp = iTemp / 10;
		}
		
		iTemp = iNo;
		
		while(iTemp != 0)
		{
			iDigit = iTemp % 10;
			for(iCnt = 1; iCnt <= iDigitCnt; iCnt++)
			{
				iPower = iPower * iDigit;
			}
			iSum = iSum + iPower;
			iPower = 1;
			iTemp = iTemp / 10;
		}
		
		if(iSum == iNo)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class program143
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iValue = 0;
		boolean bRet = false;
		System.out.println("Enter Number : ");
		iValue = sobj.nextInt();
		
		Marvellous mobj = new Marvellous();
		
		bRet = mobj.CheckArmstrong(iValue);
		
		if(bRet == true)
		{
			System.out.println("It is Armstrong Number");
		}
		else
		{
			System.out.println("It is not Armstrong Number");
		}
		
	}
}


