// accept string and print word which ocuurs more than 1 times 
// case sensitive
import java.util.*;

class Marvellous
{
	public void WordFrequency(String s)
	{

		String s2 = s.trim().replaceAll("[ ]{2,}"," ");
		
		String Arr[] = s2.split(" ");	

		HashMap<String, Integer> hobj = new HashMap<String, Integer>();

		for(String str: Arr)
		{
			if(hobj.containsKey(str))
			{
				hobj.put(str, (hobj.get(str) + 1));
			}
			else
			{
				hobj.put(str, 1);
			}

		}
		System.out.println("Frequency of Words is : ");

		System.out.println(hobj);
	}
}

class program265
{
	public static void main(String[] args) {
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter String : ");
		String s = sobj.nextLine();

		Marvellous mobj = new Marvellous();
		mobj.WordFrequency(s);
	}
}