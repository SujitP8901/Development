// accpet file name from user and read the whole file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0; 	//file descriptor
	char Fname[30];
	char Buffer[1024];		//Mug
	
	printf("Enter file name : \n");
	scanf("%s",Fname);
	
	fd = open(Fname, O_RDONLY);	//RDONLY = Read ONLY
	
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;		// Return to OS
	}
	else
	{
		printf("File Successfully Opened with FD : %d\n", fd);
	}
	
	printf("Data from file is : \n");
	while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
	{
		write(1, Buffer, iRet);
	}
	
	close(fd);
	return 0;
}