
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int *ptr=NULL;
	
	ptr=(int *)malloc(5*(sizeof(int)));
	
	ptr=(int *)realloc(ptr,(7*sizeof(int)));//used to increase memory
	
	//ptr=(int *)realloc(ptr,(3*sizeof(int)));//used to decrease memory
	
	
	
	free(ptr);
	
	return 0;
}
/*
	realloc expand and reduce allocated memory
*/