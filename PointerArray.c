
#include<stdio.h>

int main()
{
	int Arr[5]={10,20,30,40,50};
	
	int *p=NULL;//good programming practice to inilize unilization pointer to avoid run time accident(segmetation fault)
	
	int *q=NULL;//pointer che default value is NULL
	
	p=&(Arr[0]);
	
	q=&(Arr[4]);
	
	printf("Value of P befor Increment:%d\n",p);//100
	p++;
	// p= p +1
	// p= p+ (1*sizeof(Pointer_Type))
	// p = p+ (1*4)
	// p = p +4
	// p = 100+4
	//p =104
	printf("Value of P after Increment:%d\n",p);//104
	
	printf("Value of q befor decrement:%d\n",q);//100
	q--;
	// q= q -1
	// q= q- (1*sizeof(Pointer_Type))
	// q= q- (1*4)
	// q = q -4
	// q = 116-4
	//q =112
	printf("Value of q after Decrement:%d\n",q);//104
	
	return 0;
}
