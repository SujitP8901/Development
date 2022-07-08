import java.util.*;

class Marvellous
{
	public void CharFrequency(String s)
	{
		String s2 = s.replaceAll(" ", "");

		System.out.println("String After removing whitespaces : " + s2);

		char Arr[] = s2.toCharArray();

		System.out.println("Character Array : ");

		for(char ch : Arr)
		{
			System.out.println(ch);
		}
	}
}

class program261
{
	public static void main(String[] args) {
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter String : ");
		String s = sobj.nextLine();

		Marvellous mobj = new Marvellous();
		mobj.CharFrequency(s);
	}
}