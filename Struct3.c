//Constant  Structure Object 
#include<stdio.h>
struct Demo
{
	const int i;
	const int j;
};


int main()
{
	struct Demo obj={11,21};//we have inilize this way we cannot assign data using member by member
	//obj.i++;//Error
	
	
	printf("i:%d\n",obj.i);
	printf("j:%d\n",obj.j);
	
	return 0;
}
/* both const structue object and const variable inside structure method perform same 
its use is depends on your need