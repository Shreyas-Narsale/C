//

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>//fcntl -file contol 
#include<unistd.h>//universal standard
int main()
{
	char fName[30];
	int fd=0;
	char Data[11];
	printf("Enter the file Name that we want to open:");
	scanf("%s",fName);
	
	fd=open(fName,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("Sucessfully Opened with fd:%d\n",fd);
	}
	
	lseek(fd,-7,2);
	read(fd,Data,6);
	
	write(1,Data,6);
	close(fd);
	
	
	
	
	
	
	return 0;
}