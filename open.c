//

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>//fcntl -file contol 


int main()
{
	char fName[30];
	int fd=0;
	printf("Enter the file Name that we want to open:");
	scanf("%s",fName);
	
	fd=open(fName,O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file\n");
	}
	else
	{
		printf("Sucessfully Opened with fd:%d\n",fd);
	}
	
	
	
	
	return 0;
}