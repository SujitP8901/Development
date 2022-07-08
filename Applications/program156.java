//Accept String and Reverse that String(use defined function)
import java.util.*;
import MarvellousString.StringX;

class Marvellous extends StringX
{
	public String ReverseX()
	{
		char Arr[] = str.toCharArray();

		int iStart = 0, iEnd = Arr.length - 1;
		char temp = '\u0000';
		while(iStart < iEnd)
		{
			temp = Arr[iStart];
			Arr[iStart] = Arr[iEnd];
			Arr[iEnd] = temp;
			iStart++;
			iEnd--;
		}
		
		return String.valueOf(Arr);
	}
}

class program156
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		String rev;

		mobj.Accept();
		mobj.Display();	

		rev = mobj.ReverseX();

		System.out.println("Revese String : " +rev);
	}
}