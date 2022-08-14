#include<stdio.h>
int iGloNum=31;//Inilized global variable 
int j; //Non-Inilized global variable 
//j saves default value 0 in Data-Bss
//non-inilized global variable saves Default Value

void Demo(int iNo)
{
	int iNum=20;//this iNum is different than main
	printf("Global Num is:%d\n",iGloNum);//access global variable
	iGloNum=12;//if we change here global variable
}

void Hello()//it cannot access main function iNum
{
	int iNumber=10;
	printf("Inside Hello\n");
	printf("Global Num inside Hello is:%d\n",iGloNum);// it gives 12 not 31 any one access and do changes in global variable
}

int main()
{
	int iNum=30;
	int B;//B saves garbage 
	//non -inilized local variable saves garbage in stack
	Demo(iNum);
	Hello();
	printf("Grabage is:%d",B);
	return 0;
}