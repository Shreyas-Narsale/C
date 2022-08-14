#include<stdio.h>


struct Demo
{
	int i;
	int j;
	struct Demo obj;//Gives Error 
	//Inside struecture we cannot create obj of same structure
};

struct Demo
{
	int i;
	int j;
	struct Demo *obj;//self Referenial structure
	//memory for this should be allocated beacause pointer have memory of 8 byte
};

int main()
{
	struct Outer hobj;
	
	hobj.f=10.11;
	hobj.iNo=11;
	hobj.iobj.i=21;
	hobj.iobj.j=51;
	
	printf("i is :%d\n",hobj.iobj.i);
	printf("Size of hobj:%d\n",sizeof(hobj));
	return 0;
}
