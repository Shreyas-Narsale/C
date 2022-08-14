//Constant  Structure Object 
#include<stdio.h>
struct Demo
{
	int i;
	int j;
	
};


int main()
{
	const struct Demo obj;
	//obj.i=11;//Cannot Assgin to Constat Demo 
	//obj.j=21;
	
	const struct Demo obj1={11,21};//This way we can save data in constant object
	printf("i:%d\n",obj1.i);
	printf("j:%d\n",obj1.j);
	
	return 0;
}
