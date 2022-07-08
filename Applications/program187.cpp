#include<iostream>
#include<stdio.h>
#include<fcntl.h>
#include<io.h>
#include<unistd.h>
#include<string.h>

using namespace std;

class MarvellousFile
{
public : 
	char Fname[30];
	int fd = 0;
	
	MarvellousFile(char * Name)		// Constructor
	{
		cout << "Inside Constructor \n";
		strcpy(Fname, Name);
		fd = open(Fname, O_RDWR);
	}
	
	~MarvellousFile()				//	Destructor
	{
		cout << "Inside Destructor \n";
		close(fd);
	}
	
	void Display()
	{
		int iRet = 0, i = 0;
		char Buffer[10];
		lseek(fd, 0, 0);
		
		cout << "Data of File is : \n";
		while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
		{
			write(1, Buffer, iRet);
		}
	}
	
	int CountCapital()
	{
		int iCnt = 0, i = 0, iRet = 0;
		char Buffer[10];
		
		lseek(fd, 0, 0);
		
		while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
		{
			for(i = 0; i < iRet; i++)
			{
				if((Buffer[i] >= 'A') && (Buffer[i] <= 'Z'))
				{
					iCnt++;
				}
			}
		}
		
		return iCnt;
	}
	
	int CountSmall()
	{
		int iCnt = 0, i = 0, iRet = 0;
		char Buffer[10];
		
		lseek(fd, 0, 0);
		
		while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
		{
			for(i = 0; i < iRet; i++)
			{
				if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
				{
					iCnt++;
				}
			}
		}
		
		return iCnt;
	}
	
	int CountSpaces()
	{
		int i = 0, iCnt = 0, iRet = 0;
		char Buffer[10];
		
		lseek(fd, 0, 0);
		
		while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
		{
			for(i = 0; i < iRet; i++)
			{
				if(Buffer[i] == ' ')
				{
					iCnt++;
				}
			}
		}
		
		return iCnt;
	}
	
	int CountVowels()
	{
		int i = 0, iCnt = 0, iRet = 0;
		char Buffer[10];
		
		lseek(fd, 0, 0);
		
		while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
		{
			for(i = 0; i < iRet; i++)
			{
				if((Buffer[i] == 'A') || (Buffer[i] == 'E') || (Buffer[i] == 'I') || (Buffer[i] == 'O') || (Buffer[i] == 'U') || (Buffer[i] == 'a') || (Buffer[i] == 'e') || (Buffer[i] == 'i') || (Buffer[i] == 'o') || (Buffer[i] == 'u'))
				{
					iCnt++;
				}
			}
		}
		
		return iCnt;
	}
	
	int CountSize()
	{
		int iRet = 0;
		lseek(fd, 0, 0);
		
		iRet = lseek(fd, 0, 2);
		
		return iRet;
	}
	
	int CountDigit()
	{
		int iCnt = 0, i = 0, iRet = 0;
		char Buffer[10];
		
		lseek(fd, 0, 0);
		
		while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
		{
			for(i = 0; i < iRet; i++)
			{
				if((Buffer[i] >= '0') && (Buffer[i] <= '9'))
				{
					iCnt++;
				}
			}
		}
		
		return iCnt;
	}
	
	
};

int main()
{
	char Name[30];
	int iRet = 0;
	
	cout << "Enter File Name : \n";
	cin >> Name;
	
	MarvellousFile mobj(Name);
	
	mobj.Display();
	cout << "\n";
	
	iRet = mobj.CountCapital();
	cout << "Count of Capital Letters is : " << iRet << endl;
	
	iRet = mobj.CountSmall();
	cout << "Count of Small Letters is : " << iRet << endl;
	
	iRet = mobj.CountDigit();
	cout << "Count of Digits is : " << iRet << endl;
	
	iRet = mobj.CountVowels();
	cout << "Count of Vowels is : " << iRet << endl;
	
	iRet = mobj.CountSpaces();
	cout << "Count of White-Space is : " << iRet << endl;
	
	iRet = mobj.CountSize();
	cout << "Size of file is : " << iRet << endl;
	
	
	
	return 0;
}