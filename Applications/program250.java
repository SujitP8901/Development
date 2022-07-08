import java.util.*;

class Operations
{
	public boolean LinearSearch(int Arr[], int no)
	{
		int i = 0;
		for(i = 0; i < Arr.length; i++)
		{
			if(Arr[i] == no)
			{
				break;
			}
		}

		if(i == Arr.length)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	public boolean CheckSortedAsc(int Arr[])
	{
		int i = 0;
		for(i = 0; i < Arr.length-1; i++)
		{
			if(!(Arr[i] < Arr[i+1]))
			{
				break;
			}
		}

		if(i == Arr.length-1)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

	public boolean CheckSortedDesc(int Arr[])
	{
		int i = 0;
		for(i = 0; i < Arr.length-1; i++)
		{
			if(!(Arr[i] > Arr[i+1]))
			{
				break;
			}
		}

		if(i == Arr.length-1)
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

	public void BubbleSort(int Arr[])
	{
		if(CheckSortedAsc(Arr))
		{
			System.out.println("Already Sorted");
			return;
		}

		int temp = 0, i = 0, j = 0;
		int size = Arr.length;

		for(i = 0; i < size; i++)
		{
			for(j = 0; j < size - i -1; j++)
			{
				if(Arr[j] > Arr[j+1])
				{
					temp = Arr[j];
					Arr[j] = Arr[j+1];
					Arr[j+1] = temp;
				}
			}
		}
	}

	public boolean BinarySearch(int Arr[], int no)
	{
		if(!(CheckSortedAsc(Arr) || CheckSortedDesc(Arr)))
		{
			BubbleSort(Arr);
		}

		int start, end, mid;
		start = 0;
		end = Arr.length-1;

		mid = (start+end)/2;

		while(start <= end)
		{
			if(Arr[mid] == no)
			{
				break;
			}
			else if(no > Arr[mid])
			{
				start = mid + 1;
			}
			else if(no < Arr[mid])
			{
				end = mid - 1;
			}

			mid = (start + end)/2;
		}

		if(Arr[mid] == no)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class program250
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);

		int i = 0;

		System.out.println("Enter Size of Array : ");
		int size = sobj.nextInt();

		int Arr[] = new int[size];

		System.out.println("Enter Elements : ");
		for(i = 0; i < Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}

		System.out.println("Enter Data You Want to Search : ");
		int iValue = sobj.nextInt();

		Operations obj = new Operations();

		boolean bRet = obj.BinarySearch(Arr, iValue);

		if(bRet == true)
		{
			System.out.println("Element is there");
		}
		else
		{
			System.out.println("Element is not there");
		}

		// obj.BubbleSort(Arr);

		System.out.println("Entered Elements : ");
		for(i = 0; i < Arr.length; i++)
		{
			System.out.println(Arr[i]);
		}
	}
}