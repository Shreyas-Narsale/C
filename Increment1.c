

#include<stdio.h>

int main()
{
	int iNo1=10;
	int iNo2=10;
	
	printf("Value of iNo1 :%d\n",iNo1);
	iNo1++;//iNo1=iNo1+1//it is just Increment not postIncrement
	printf("Value of iNo1 (Increment):%d\n",iNo1);
	
	printf("Value of iNo2 :%d\n",iNo2);
	++iNo2;//iNo2=iNo2+1//it is just Increment not pretIncrement
	printf("Value of iNo2(Increment) :%d\n",iNo2);
	
	
	return 0;
}