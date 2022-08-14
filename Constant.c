#include<stdio.h>
const int A = 50;// global const
int main()
{
	int iNo1=10;
	const int iNo2=10;// auto const
	
	iNo1=12; //reinlizied 
	//iNo2=12;//we cannot change(reinlizied ) Constant 
	
	iNo1++;//Increment
	//iNo2++;//we cannot change(Increment) Constant 
	
	printf("Variable: %d\n",iNo1); 
	printf("Constant: %d\n",iNo2);
	
	return 0;
}