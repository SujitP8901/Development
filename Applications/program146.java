//	Add N elements
import java.util.*;

class Marvellous
{
	public int Add(int Brr[])
	{
		int iSum = 0, iCnt = 0;

		for(iCnt = 0; iCnt < Brr.length; iCnt++)
		{
			iSum = iSum + Brr[iCnt];
		}

		return iSum;
	}
}

class program146
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0, iCnt = 0, iRet = 0;

		System.out.println("Enter Number of Elements : ");
		iSize = sobj.nextInt();

		int Arr[] = new int[iSize];

		System.out.println("Enter Elements : ");

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}

		Marvellous mobj = new Marvellous();
		iRet = mobj.Add(Arr);

		System.out.println("Addition is : " +iRet);
	}
}