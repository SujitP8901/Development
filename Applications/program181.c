//Count Whitespaces
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iCnt = 0, iRet = 0, i = 0;
	char Fname[20];
	char Buffer[10];
	
	printf("Enter File Name : \n");
	scanf("%s", Fname);
	
	fd = open(Fname, O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
	{
		for(i = 0; i < iRet; i++)
		{
			if(Buffer[i] == ' ')
			{
				iCnt++;
			}				
		}
	}
	
	printf("total Number of Small Letters are : %d", iCnt);
	
	close(fd);
	return 0;
}