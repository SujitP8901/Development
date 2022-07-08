// write a program to create new file 
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
	int fd = 0; 	//file descriptor
	
	fd = creat("Marvellous.txt", 0777);
	
	if(fd == -1)
	{
		printf("Unable to create the file");
	}
	else
	{
		printf("File Succesfully created");
	}
	
	return 0;
}