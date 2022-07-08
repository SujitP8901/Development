import java.util.*;

class Marvellous
{
	public void CharFrequency(String s)
	{
		String s2 = s.replaceAll(" ", "");

		System.out.println("String After removing whitespaces : " + s2);

		char Arr[] = s2.toCharArray();

		System.out.println("Character Array : ");

		HashMap<Character, Integer> hobj = new HashMap<Character, Integer>();

		int i = 0;

		for(char ch : Arr)
		{
			if(hobj.containsKey(ch))
			{
				i = hobj.get(ch);
				hobj.put(ch, i+1);
			}
			else
			{
				hobj.put(ch, 1);
			}
		}

		System.out.println("Frequency of each Character is : " +hobj);
	}
}

class program262
{
	public static void main(String[] args) {
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter String : ");
		String s = sobj.nextLine();

		Marvellous mobj = new Marvellous();
		mobj.CharFrequency(s);
	}
}