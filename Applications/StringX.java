package MarvellousString;
import java.util.*;

public class StringX
{
	// Characteristics
	public String str;

	// Methods (Behaviour)
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter String : ");
		str = sobj.nextLine();
	}

	public void Display()
	{
		System.out.println("String is : " +str);
	}
}
