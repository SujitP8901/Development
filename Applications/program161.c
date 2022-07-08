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
	char Data[] = "Marvellous Infosystems";
	
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
	
	iRet = write(fd, Data, 22);
	
	printf("%d bytes gets succesfully written in the file",iRet);
	close(fd);
	return 0;
}