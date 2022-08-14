#include<stdio.h>

int main()
{
	int Arr[5]={10,20,30,40,50};
	
	printf("Arr[0]  :%d\n",Arr[0]);//10
	printf("Arr[4]  :%d\n",Arr[4]);//50
	printf("&Arr    :%d\n",Arr);//100
	printf("&Arr    :%d\n",&Arr);//100
	printf("&Arr[0] :%d\n",&Arr[0]);//100
	
	printf("Arr+1   :%d\n",Arr+1);//100+sizeof(int)=100+4=104
	printf("(&Arr)+1:%d\n",(&Arr)+1);//100+sizeof(Arr)=100+20=120
	printf("sizeof Arr:%d\n",sizeof(&Arr));//20
	printf("sizeof Arr[2]:%d\n",sizeof(Arr[2]));//4
	printf("Arr[2]:%d\n",Arr[2]);
	printf("*(Arr+2):%d\n",(*(Arr+2)));
	printf("*(2+Arr):%d\n",(*(2+Arr)));
	printf("2[Arr]:%d\n",2[Arr]);
	
	
	return 0;
}
/* 
Arr is internally considerd as Address of Base Addresss
&Arr is Address of whole Array 
Arr +1 = 100+4=104
&Arr +1=100+20=120
*/
