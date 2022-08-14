
#include<stdio.h>

int main()
{
	char cValue='M';
	char *cPtr=&cValue;
	
	int iValue=21;
	int *iPtr=&iValue;
	
	float fValue=10.11;
	float *fPtr=&fValue;
	
	double dValue=20.11;
	double *dPtr=&dValue;
	
	printf("*cPtr is   : %c\n",*cPtr);
	printf("&cValue is : %d\n",&cValue);
	printf("cPtr is    : %d\n",cPtr);
	printf("size of cValue: %d\n",sizeof(cValue));
	printf("size of cPtr: %d\n",sizeof(cPtr));
	printf("size of *cPtr: %d\n",sizeof(*cPtr));
	
	return 0;
}