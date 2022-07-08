class Node
{
	public int data;
	public Node next;
	public Node prev;
}

class DoublyLL
{
	private Node first;
	private int size;

	public DoublyLL()
	{
		this.first = null;
		this.size = 0;
	}

	public void InsertFirst(int no)
	{
		Node newn = new Node();

		newn.data = no;
		newn.next = null;
		newn.prev = null;

		if(first == null)
		{
			first = newn;
		}
		else
		{
			newn.next = first;
			first.prev = newn;
			first = newn;
		}

		this.size++;
	}

	public void InsertLast(int no)
	{
		Node newn = new Node();

		newn.data = no;
		newn.next = null;
		newn.prev = null;

		if(first == null)
		{
			first = newn;
		}
		else
		{
			Node temp = first;
			while(temp.next != null)
			{
				temp = temp.next;
			}
			temp.next = newn;
			newn.prev = temp;
		}

		size++;
	}

	public void Display()
	{
		Node temp = first;

		while(temp != null)
		{
			System.out.print("|" + temp.data + "| -> ");
			temp = temp.next;
		}
		System.out.println("null");
	}

	public int Count()
	{
		return this.size;
	}

	public void DeleteFirst()
	{
		if(size == 0)
		{
			return;
		}
		else if(size == 1)
		{
			first = null;
		}
		else
		{
			first = first.next;
			first.prev = null;
		}
		this.size--;
	}

	public void DeleteLast()
	{
		if(size == 0)
		{
			return;
		}
		else if(size == 1)
		{
			first = null;
		}
		else
		{
			Node temp = first;
			while(temp.next.next != null)
			{
				temp = temp.next;
			}
			temp.next.prev = null;
			temp.next = null;
		}

		size--;
	}

	public void InsertAtPos(int no, int ipos)
	{
		if((ipos < 0) || (ipos > size+1))
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
			newn.prev = null;

			for(int i = 1; i < ipos -1; i++)
			{
				temp = temp.next;
			}

			newn.next = temp.next;
			temp.next.prev = newn;

			newn.prev = temp;
			temp.next = newn;

			size++;
		}
	}

	public void DeleteAtPos(int ipos)
	{
		if((ipos < 0) || (ipos > size))
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
			for(int i = 1; i < ipos -1; i++)
			{
				temp = temp.next;
			}

			temp.next = temp.next.next;
			temp.next.prev = temp;

			size--;
		}
	}
}

class program257
{
	public static void main(String [] arg)
	{
		DoublyLL obj = new DoublyLL();

		int iRet = 0;

		obj.InsertFirst(51);
		obj.InsertFirst(21);
		obj.InsertFirst(11);

		obj.InsertLast(101);
		obj.InsertLast(111);

		obj.InsertAtPos(75, 4);

		obj.Display();

		iRet = obj.Count();

		System.out.println("Number of Elements in Linked List : " + iRet);

		obj.DeleteAtPos(4);

		obj.DeleteFirst();
		obj.DeleteLast();

		obj.Display();

		iRet = obj.Count();

		System.out.println("Number of Elements in Linked List : " + iRet);
	}
}