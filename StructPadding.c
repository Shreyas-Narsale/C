
#include<stdio.h>
#pragma pack(1) //Soltion For Avoiding Padding 
struct Demo
{
	int i;
	float f;
	char ch;
	int j;
};
struct Demo1
{
	int i;
	float f;
	char ch;
	char cValue;
	int j;
	
};
struct Demo2
{
	int i;
	float f;
	char ch;
	int j;
	char cValue;
};
	
int main()
{
	printf("Size of Demo:%d\n",sizeof( struct Demo));//16 - 3 Bytes Padding
	//size should be 13 but it gives 16 
	// 3 Bytes are Padding
	//We should avoid Padding
	
	printf("Size of Demo1:%d\n",sizeof( struct Demo1));//16  - 2 Bytes Padding
	printf("Size of Demo2:%d\n",sizeof( struct Demo2));//20- 8 Bytes Padding
	//Both Demo1 and Demo2 are same still it Different So in 
	//Padding Seqeunce Matter
	//
	
	return 0;
}
/* if double 
*/