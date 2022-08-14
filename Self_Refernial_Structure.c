#include<stdio.h>

struct Demo
{
	int i;
	struct Demo *ptr;
};

int main()
{
	struct Demo dobj1;
	struct Demo dobj2;
	struct Demo dobj3;
	struct Demo *p=&dobj1;//100
	
	
	dobj1.i=11;//11
	dobj1.ptr=&dobj2;//200
	
	dobj2.i=21;//21
	dobj2.ptr=&dobj3;//300
	
	dobj3.i=31;//31
	dobj3.ptr=NULL;//NULL
	
	printf("dobj3.i=31: %d\n",dobj1.ptr->ptr->i);
	
	return 0;
}