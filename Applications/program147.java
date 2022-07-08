//	Add N elements
import java.util.*;

class ArrayX
{
//	charcteristics = 1, behavoiur = 3 
	public int Arr[];

	public ArrayX(int iSize)
	{
		Arr = new int[iSize];
	}

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		int iCnt = 0;

		System.out.println("Enter Elements : ");
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
		}
	}

	public void Display()
	{
		System.out.println("Elements are : ");
		int iCnt = 0;
		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			System.out.println(Arr[iCnt]);
		}
	}
}

class Marvellous extends ArrayX
{
	public Marvellous(int iValue)
	{
		super(iValue);
	}

	public int Add()
	{
		int iSum = 0, iCnt = 0;

		for(iCnt = 0; iCnt < Arr.length; iCnt++)
		{
			iSum = iSum + Arr[iCnt];
		}

		return iSum;
	}
}

class program147
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		int iLength = 0, iRet = 0;

		System.out.println("Enter the Number of Elements : ");
		iLength = sobj.nextInt();

		Marvellous mobj = new Marvellous(iLength);

		mobj.Accept();
		mobj.Display();

		iRet = mobj.Add();

		System.out.println("Addition is " + iRet);
	}
}