
#include<stdio.h>
//Address  of Array
int main()
{
	int Data[7];
	
	printf("Base Address of Array is:%u\n",&Data);
	printf("Base Address of Array is:%u\n",Data);
	//here befor Data we not use &
	//Name of Array is internally considerd as address
	printf("Address of First element of Array is:%u\n",&Data[0]);
	printf("Address of Second element of Array is:%u\n",&Data[1]);
	printf("Address of Thrid element of Array is:%u\n",&Data[2]);
	//for index data use & otherwise it gives error
	printf("Size of Array is:%d\n",sizeof(Data));
	printf("4th element is(garbage):%d",Data[4]);//give garbage
	
	const int arr[7];
	arr[1]=10;
	arr[2]=12;
	printf("arr[1]:",arr[1]);
	printf("arr[2]:",arr[2]);
	
	return 0;

}