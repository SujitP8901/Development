package MarvellousNumbers;
import java.util.*;

public class ArrayX
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