
#include<stdio.h>


struct Demo
{
	int iNo;
	float fValue;
	int iValue;
	
};


int main()
{
	struct Demo obj1;
	
	struct Demo *p=NULL;//structre pointer
	p=&obj1;
	
	
	printf(" Address of obj1:%d\n",&obj1);//21
	 
	//we only use -> (Indirect accessing operator) only in pointer
	p->iNo=11;
	p->iValue=21;
	p->fValue =10.11;
	
	printf("iValue:%d\n",p->iValue);
	printf("iValue:%d\n",obj1.iValue);
	
	
	return 0;
}

/* 
struct Demo *p=&obj1;//structre pointer
Reading = p is a pointer which holds  Address of stuct Demo,cureently it holds address of obj1

in pointer = use (-> ) (Indirect accessing operator) 
in obj= use (.)  (direct accessing operator) 
*/


