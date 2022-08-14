

#include<stdio.h>

int main()
{
	int iValue=11;
	char cValue='A';
	float fValue=10.11;
	double dValue=20.11;
	
	void *ptr=NULL;//NULL is internally considered as 0
	//NULL is macro (writeen in stdio.h)
	
	ptr=&iValue;
	printf("int *ptr is:%d\n",(*(int*)ptr));//typecasting of ptr as int for temporay
	
	ptr=NULL;
	ptr=&fValue;
	printf("float *ptr is:%f\n",(*(float*)ptr));
	
	ptr=NULL;
	ptr=&cValue;
	printf("char *ptr is:%c\n",(*(char*)ptr));
	 
	
	return 0;
}