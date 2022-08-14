

#include<stdio.h>
#include <string.h>//for string 

int main()
{
	int iRet=0;
	//First Way to create String
	char Arr[10]={'a','b','c','d','\0'};//\0 written by user explicitly
	
	//Second Way to create String
	char Brr[5]= "abcd";//\0 written by implicitly 
	
	printf("String is:%s\n",Arr);
	printf("String is:%s\n",Brr);
	
	printf("Arr[0] is:%c\n",Arr[0]);
	printf("Arr[1] is:%c\n",Arr[1]);
	printf("Arr[2] is:%c\n",Arr[2]);
	printf("Arr[3] is:%c\n",Arr[3]);
	//printf("Arr[4] is:%c\n",Arr[4]);// '\0' is not printable also not a space
	
	printf("Size of String Arr:%d\n",sizeof(Arr));// 5
	printf("Size of String Brr:%d\n",sizeof(Brr));// 5
	
	printf("length of String is:%d\n",strlen(Arr));
	printf("length of String is:%d\n",strlen(Brr));
	 
	
	return 0;
}