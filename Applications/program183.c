//Count number of bytes in the file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;
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

	iRet = lseek(fd,0,2);
	
	printf("File Size is : %d", iRet);
	
	close(fd);
	return 0;
}