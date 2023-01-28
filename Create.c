//

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>//fcntl -file contol 


int main()
{
	char fName[30];
	int fd=0;
	printf("Enter the file Name that we want to create:");
	scanf("%s",fName);
	
	fd=creat(fName,0777);
	if(fd==-1)
	{
		printf("Unable to create file\n");
	}
	else
	{
		printf("Sucessfully Created with fd:%d\n",fd);
	}
	
	
	
	
	return 0;
}