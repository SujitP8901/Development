// Accept number from user and check number is prime or not
import java.util.*;

class Marvellous
{
	public boolean CheckPrime(int iNo)
	{
		int iCnt = 0;
		boolean bflag = true;
		for(iCnt = 2; iCnt <= iNo/2; iCnt++)
		{
			if(iNo % iCnt == 0)
			{
				bflag = false;
				break;
			}
		}
		return bflag;
	}
}

class program141
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iValue = 0;
		boolean bRet = false;
		System.out.println("Enter Number : ");
		iValue = sobj.nextInt();
		
		Marvellous mobj = new Marvellous();
		
		bRet = mobj.CheckPrime(iValue);
		
		if(bRet == true)
		{
			System.out.println("It is Prime");
		}
		else
		{
			System.out.println("It is not Prime");
		}
		
	}
}

