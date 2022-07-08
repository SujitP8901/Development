//	Accept string and count number of vowels(small case only)
import java.util.*;
import MarvellousString.StringX;

class Marvellous extends StringX
{
	public int CountVowels()
	{
		char Arr[] = str.toCharArray();

		int iCnt = 0, i = 0;

		for(i = 0; i < Arr.length; i++)
		{
			if((Arr[i] == 'a') || (Arr[i] == 'e') || (Arr[i] == 'i') || (Arr[i] == 'o') || (Arr[i] == 'u'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class program153
{
	public static void main(String arg[])
	{
		Marvellous mobj = new Marvellous();
		int iRet = 0;

		mobj.Accept();
		mobj.Display();	

		iRet = mobj.CountVowels();
		System.out.println("Number of Vowels are : " +iRet);
	}
}