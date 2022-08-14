//Use of Assgin Operator

#include<stdio.h>

int main()
{
	int Arr[5]={10,20,30,40,50};
	
	int *p=NULL;
	int *q=NULL;
	
	p=&(Arr[0]);
	q=&(Arr[4]);
	
	printf("Number of Elemnts betn p & q are:%d\n",q-p);// Pointer-Pointer
	
	printf("Value of P :%d\n",p);
	
	p=p+3;//Pointer+Number
	printf("Value of P :%d\n",p);
	
	printf("Value of q :%d\n",q);
	
	q=q-3;//Pointer-Number
	printf("Value of q :%d\n",q);
	
	
	return 0;
}


/*

addition 
 -Pointer - Number 
		p+3
		p+ (3*(sizeof(Pointer_type)))
 -Pointer -Pointer //NA
 
subtraction
  -Pointer -Number
		q-3
		q- (3*(sizeof(Pointer_type)))
  -Pointer -Pointer
		q-p// is valid only if both belongs to same memory
		q-p/(sizeof(Pointer_type)

mult //NA

 -Pointer - Number //NA
 -Pointer -Pointer //NA
 

Divison //NA
 -Pointer - Number //NA
 -Pointer -Pointer //NA
 
*/