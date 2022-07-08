import java.util.*;

class program244
{
	public static void main(String [] args)
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Size of Array : ");
		int size = sobj.nextInt();

		int Arr[] = new int[size];

		System.out.println("Enter the Elements : ");
		for(int i = 0;i < Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}

		System.out.println("Entered Data is : ");
		for(int i = 0; i < Arr.length; i++)
		{
			System.out.println(Arr[i]);
		}
	}
}