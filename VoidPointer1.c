
#include<stdio.h>

// #define NULL (void *)0
int main()
{
	int *p=NULL;
	int *q;
	
	printf("%d",*q);//It may give Segmentation fault
	//we try access address which is not our 
	//it is address of garbage
	
	
	
	return 0;
}