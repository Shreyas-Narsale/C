
#include<stdio.h>
#include<stdlib.h>
void A(int* x)
{
	int size=0;
	printf("Enter Size:");
	scanf("%d",&size);
	x = (int*)malloc(size*sizeof(int));
	for(int i = 0; i< size; i++)
	{
		x[i] = i;
	}
}

void B(int*& a)
{
	printf("inside B");
	printf("%d", x[8]);
}

int main()
{
   int* a = NULL;
   A(a);
   B(a);
   return 0;
}
//Change the argument type to int*& a
//(int *x ani int*& a)yat kay vegalay ye