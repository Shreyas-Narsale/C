
#include<stdio.h>

struct Outer//Outer Structure
{
	float f;
	int iNo;
	struct Inner//Inner Structure
	{
		int i;
		int j;
	}iobj;
	//Innerobj inside declare karne compulsory ye
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

