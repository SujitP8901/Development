// open the file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0; 	//file descriptor
	char Fname[30];
	
	printf("Enter file name : \n");
	scanf("%s",Fname);
	
	fd = open(Fname, O_RDWR);	//RDWR = Read Write
	
	if(fd == -1)
	{
		printf("Unable to open file");
	}
	else
	{
		printf("File Successfully Opened with FD : %d", fd);
	}
	
	return 0;
}