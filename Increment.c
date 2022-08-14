

#include<stdio.h>

int main()
{
	int iNo1=10;
	int iNo2=20;
	int iAns1=0;
	int iAns2=0;
	
	iAns1=iNo1++;//Post-Incremenet
	printf("Value of iAns (Post-Incremenet) :%d\n",iAns1);//10
	printf("Value of iNo1 :%d\n",iNo1);//11
	
	
	iAns2=++iNo2;//Pre-Incremenet
	printf("Value of iAns (Pre-Incremenet) :%d\n",iAns2);//21
	printf("Value of iNo2 :%d\n",iNo2);//21
	
	
	return 0;
}