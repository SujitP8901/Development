//
import java.util.*;

class program145
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0, iCnt = 0;

		System.out.println("Enter Number of Elements : ");
		iSize = sobj.nextInt();

		int Arr[] = new int[iSize];

		System.out.println("Enter Elements : ");

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}

		System.out.println("Enetred Elements are : ");
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
}