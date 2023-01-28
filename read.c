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
		return -1;//os la sanga abortion 
	}
	else
	{
		printf("Sucessfully Opened with fd:%d\n",fd);
	}
	

	read(fd,Data,6);
	//printf("Data from file is:%6s\n",Data);//%6s means pahilay 6 letter display kar	 %6s =width specifier
	write(1,Data,6);//display data on console
	close(fd);
	
	
	
	
	
	
	return 0;
}