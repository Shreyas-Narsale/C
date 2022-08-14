#include<stdio.h>
extern int iNo;//declaration= fakt sangto iNo badal memory ny bhetat
//extern variable // use Second.c iNo=11
//here iNo is only declared here not defined
int main()
{
	
	printf("%d\n",iNo);
	
	return 0;
}
//gcc First.c Second.c -o Myexe
//Myexe