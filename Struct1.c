
#include<stdio.h>

//Structure Declaration 
struct Demo
{
	int iNo;
	float fValue;
	int iValue;
	
}obj3;//obj3 defined here


int main()
{
	//Structure Object Creation
	struct Demo obj1;//obj1 defined here
	struct Demo obj2={51,10.11,21};//obj2 defined and inilized here
	//Obj2 Sequence Mendotory
	//Obj2 
	
	
	//Object1 Inilization
	obj1.iNo=21;
	obj1.iValue=11;
	obj1.fValue=10.11;
	
	
	printf("obj1.iValue:%d\n",obj1.iValue);//21
	printf("obj2.iValue:%d\n",obj2.iValue);
	return 0;
}
