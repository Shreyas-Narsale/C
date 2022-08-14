
#include<stdio.h>


struct Demo
{
	int iNo;
	float fValue;
	int iValue;
	
};

int main()
{
	struct Demo Arr[4];
	
	Arr[0].iNo=51;
	Arr[0].fValue=30.11;
	Arr[0].iValue=101;
	
	Arr[3].iNo=11;
	Arr[3].fValue=10.11;
	Arr[3].iValue=21;
	
	printf("Arr[3].iValue:%d",Arr[3].iValue);
	printf("Arr[0].iNo:%d",Arr[0].iNo);
	
	return 0;
}

/*
struct Demo Arr[4];
raeding : Arr is one Dimensioanl array which
 contain 4 elemenst each elemts is of type struct Demo 
 where Demo is structure which contain 3 elemnts int ,float , int
*/


