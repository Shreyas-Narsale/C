#include<stdio.h>
//One & multi Dimensional Array
int main()
{
	
	int Arr[4];
	
	Arr[0]=10;
	Arr[1]=20;
	Arr[2]=30;
	Arr[3]=40;
	
	int Brr[3][4];
	Brr[0][0]=10;// 1 st row 1 st elements
	Brr[0][1]=20;// 1 st row 2 st elements
	Brr[0][2]=30;// 1 st row 3 st elements
	Brr[0][3]=40;// 1 st row 4 st elements
	Brr[2][1]=101;// 3 st row 2 st elements
	//remaining elements contain garbage beacause it is member by member inilized array 
	
	return 0;
}
