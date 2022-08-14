

#include<stdio.h>

int main()
{
	int iNo1=10;
	int iNo2=20;
	int iAns1=0;
	int iAns2=0;
	
	iAns1=iNo1--;//Post-decremenet
	printf("Value of iAns (Post-decremenet) :%d\n",iAns1);//10
	printf("Value of iNo1 :%d\n",iNo1);//9
	
	
	iAns2=--iNo2;//Pre-decremenet
	printf("Value of iAns (Pre-decremenet) :%d\n",iAns2);//19
	printf("Value of iNo2 :%d\n",iNo2);//19
	
	
	return 0;
}