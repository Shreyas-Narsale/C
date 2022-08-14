

#include<stdio.h>
//Address 
int main()
{
	int no=11;
	char ch='A';
	
	printf("Value of no:%d\n",no);// 11
	//%d, %c format specifier
	printf("Value of ch: %c\n",ch);//A
	
	printf("Address of no is:%u\n",&no);//100
	//gives Address
	//every time during excution gives different Address
	printf("Address of ch is:%u\n",&ch);//200
	
	
	printf("Size of no is:%d\n",sizeof(no));//4
	printf("Size of ch is:%d\n",sizeof(ch));//1
	//given size is in byte
	
	return 0;
}
//format specifier 
//%d = decimal
/*
	%d=signed int in Decimal Format
	%c= Char
	%f=float
	%u=unsigned int
	%x=Hexadeciaml data
	%o=octal data
	%p=Pointer representation
	%lf =double
	%Ld =Long double
	%s =String 
*/