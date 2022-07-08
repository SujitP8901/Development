import java.util.*;

class Marvellous
{
	public void Display(String Data)
	{
		System.out.println("Welcome : "+Data);
	}
}

class program151
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		String str;

		System.out.println("Enter Your Name : ");
		str = sobj.nextLine();

		Marvellous mobj = new Marvellous();
		mobj.Display(str);
	}
}