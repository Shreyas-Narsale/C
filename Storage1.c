#include<stdio.h>


void Demo()
{
	auto int A=10;//auto variable
	A++;
	printf("%d\n",A);
}
//%d mhanje d for decimal
///n mhanje go to new line 

void Hello()
{
	static int A=10;//static(local) variable
	A++;
	printf("%d\n",A);
}

int main()
{
	printf("Inside Demo 1: ");
	Demo();//Function Call
	
	printf("Inside Demo 2: ");
	Demo();//Function Call
	
	printf("Inside Hello 1: ");
	Hello();
	
	printf("Inside Hello 2: ");
	Hello();
	
	return 0;
}