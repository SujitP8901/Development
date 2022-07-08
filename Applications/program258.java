class Node
{
	public int data;
	public Node next;
}

class SinglyCL
{
	private Node first;
	private Node last;
	private int size;

	public SinglyCL()
	{
		this.first = null;
		this.last = null;
		this.size = 0;
	}

	public void InsertFirst(int no)
	{
		Node newn = new Node();

		newn.data = no;
		newn.next = null;

		if((first == null) && (last == null))
		{
			first = newn;
			last = newn;
		}
		else
		{
			newn.next = first;
			first = newn;
		}

		last.next = first;

		this.size++;
	}

	public void InsertLast(int no)
	{
		Node newn = new Node();

		newn.data = no;
		newn.next = null;

		if((first == null) && (last == null))
		{
			first = newn;
			last = newn;
		}
		else
		{
			last.next = newn;
			last = newn;
		}
		last.next = first;
		this.size++;
	}

	public void DeleteFirst()
	{
		if((first == null) && (last == null))
		{
			return;
		}
		else if(first == last)
		{
			first = null;
			last = null;
		}
		else
		{
			first = first.next;

			last.next = first;
		}

		this.size--;
	}

	public void DeleteLast()
	{
		if((first == null) && (last == null))
		{
			return;
		}
		else if(first == last)
		{
			first = null;
			last = null;
		}
		else
		{
			Node temp = first;
			while(temp.next != last)
			{
				temp = temp.next;
			}
			last = temp;
			last.next = first;
		}

		this.size--;
	}

	public void InsertAtPos(int no, int ipos)
	{
		if((ipos < 0) && (ipos > size + 1))
			return;

		if(ipos == 1)
		{
			InsertFirst(no);
		}
		else if(ipos == size + 1)
		{
			InsertLast(no);
		}
		else
		{
			Node temp = first;

			Node newn = new Node();

			newn.data = no;
			newn.next = null;

			for(int i = 1; i < ipos-1; i++)
			{
				temp = temp.next;
			}
			newn.next = temp.next;
			temp.next = newn;

			this.size++;
		}
	}

	public void DeleteAtPos(int ipos)
	{
		if((ipos < 0) && (ipos > size))
			return;

		if(ipos == 1)
		{
			DeleteFirst();
		}
		else if(ipos == size)
		{
			DeleteLast();
		}
		else
		{
			Node temp = first;
			for(int i = 1; i < ipos-1; i++)
			{
				temp = temp.next;
			}
			temp.next = temp.next.next;

			this.size--;
		}
	}

	public void Display()
	{
		Node temp = first;

		do
		{
			System.out.print(temp.data + " ");
			temp = temp.next;
		}while(temp != first);
		System.out.println();
	}

	public int Count()
	{
		return this.size;
	}
}

class program258
{
	public static void main(String [] arg)
	{
		SinglyCL obj = new SinglyCL();
		int iRet = 0;

		obj.InsertFirst(51);
		obj.InsertFirst(21);
		obj.InsertFirst(11);

		obj.InsertLast(101);
		obj.InsertLast(111);

		obj.InsertAtPos(75, 4);

		obj.Display();

		iRet = obj.Count();
		System.out.println("Number of Elements : " + iRet);

		// obj.DeleteFirst();
		// obj.DeleteLast();

		// obj.Display();

		// iRet = obj.Count();
		// System.out.println("Number of Elements : " + iRet);

		obj.DeleteAtPos(4);

		obj.Display();

		iRet = obj.Count();
		System.out.println("Number of Elements : " + iRet);
	}
}

