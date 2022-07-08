import java.util.*;

class Sorting
{
	public void BubbleSort(int Arr[])
	{
		int pass = 0, j = 0, temp = 0;
		boolean bFlag = false;

		int size = Arr.length;
		for(pass = 0, bFlag = true; (pass < size) && (bFlag == true); pass++)
		{
			bFlag = false;
			for(j = 0, bFlag = false; j < size - pass - 1; j++)
			{
				if(Arr[j] > Arr[j+1])
				{
					bFlag = true;
					temp = Arr[j];
					Arr[j] = Arr[j+1];
					Arr[j+1] = temp;
				}
			}

			System.out.println("Data after Pass " + pass+1);
			for(int i = 0; i < size; i++)
			{
				System.out.print(Arr[i] + " ");
			}
			System.out.println();
		}
	}
}

class program253
{
	public static void main(String [] args)
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the Size of Array : ");
		int size = sobj.nextInt();

		int Arr[] = new int[size];

		System.out.println("Enter the Elements : ");
		for(int i = 0; i < Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}

		Sorting obj = new Sorting();

		obj.BubbleSort(Arr);

		System.out.println("Data after Sorting");

		for(int i = 0; i < Arr.length; i++)
		{
			System.out.println(Arr[i]);
		}


	}
}