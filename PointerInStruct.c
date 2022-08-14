
#include<stdio.h>

struct Demo
{
	int *ip;
	float *fp;
};

int main()
{
	struct Demo obj;
	
	int no=11;
	float f=3.10;
	
	obj.ip=&no;
	obj.fp=&f;
	
	printf("no is:%d\n",*obj.ip);
	printf("f is:%f\n",*obj.fp);
	
	return 0;
}

/*
Reading 
obj is object of structure Demo which contain two members
first member is pointer of int
second member is pointer of float 
*/

