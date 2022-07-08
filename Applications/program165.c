//	Open the file, Write in it and close the file 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0; 	//file descriptor
	char Fname[30];
	char Data[6];
	
	printf("Enter file name : \n");
	scanf("%s",Fname);
	
	fd = open(Fname, O_RDWR);	//RDWR = Read Write
	
	if(fd == -1)
	{
		printf("Unable to open file");
		return -1;		// Return to OS
	}
	else
	{
		printf("File Successfully Opened with FD : %d\n", fd);
	}
	
	iRet = read(fd, Data, 6);
	printf("%d bytes gets succesfully read from the file\n",iRet);
	
	printf("Data From the file is ");
	
	write(1, Data, iRet);	// 1 = for Desktop
	close(fd);
	
	return 0;
}