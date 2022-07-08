//Accept String and Check whether it is palindrome or not
import java.util.*;
import MarvellousString.StringX;

class Marvellous extends StringX
{
	public boolean CheckPalindrome()
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

		String newstr = new String(Arr);

		boolean bFlag = newstr.equals(str);

		return bFlag;
	}
}

class program157
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		boolean bRet = false;

		mobj.Accept();
		mobj.Display();	

		bRet = mobj.CheckPalindrome();

		if(bRet == true)
		{
			System.out.println("String is Palindrome");
		}
		else
		{
			System.out.println("String is not Palindrome");
		}
	}
}