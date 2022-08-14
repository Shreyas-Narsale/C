
#include<stdio.h>

struct Demo
{
	int Arr[3];
	float Brr[2];
};

int main()
{
	struct Demo obj;
	
	obj.Arr[0]=51;
	obj.Arr[1]=101;
	obj.Arr[2]=111;
	
	obj.Brr[0]=10.1;
	obj.Brr[1]=20.1;
	
	printf("obj.Arr[1]:%d\n",obj.Arr[1]);
	printf("obj.Brr[0]:%f\n",obj.Brr[0]);
	
	return 0;
}


