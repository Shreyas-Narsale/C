
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int iLength=0;
	int *ptr=NULL;
	
	printf("No. of Elemnst:");
	scanf("%d",&iLength);
	
	//1.allocated the memory
	ptr=(int *)malloc(iLength*(sizeof(int)));
	if(ptr==NULL)
	{
		printf("Unable to allocate memory\n");
	}
	else
	{
		printf("memory allocated Successfully\n");
	}
	
	//2.Use the memory
		//Enter Logic here
	
	
	//3.Free the memory
	free(ptr);
	
	return 0;
}
/*
malloc return void* memory 
so we need to do typecasting so memory allocted is in ur from
*/