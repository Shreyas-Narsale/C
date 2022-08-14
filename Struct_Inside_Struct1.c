
#include<stdio.h>

struct Demo//Inner Structure
{
	int i;
	int j;
	
};
struct Hello//Outer Structure
{
	float f;
	int iNo;
	struct Demo dobj;//yala declrataion yelas memory allocate hot ny karan baherchayalach ny milali ajun
	//Innerobj inside declare karne compulsory ye
};

int main()
{
	struct Hello hobj;
	
	hobj.f=10.11;
	hobj.iNo=11;
	hobj.dobj.i=21;
	hobj.dobj.j=51;
	
	printf("i is :%d\n",hobj.dobj.i);
	printf("Size of hobj:%d\n",sizeof(hobj));
	return 0;
}

