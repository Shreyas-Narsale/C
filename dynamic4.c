
#include<stdio.h>
#include<stdlib.h>
/*
	realloc for allocate fresh memory with saving previous data
*/

int main()
{
	int *ptr=NULL;
	
	ptr=(int *)malloc(5*(sizeof(int)));
	
	ptr=(int *)realloc(NULL,(7*sizeof(int)));
	
	
	
	free(ptr);
	
	return 0;
}
