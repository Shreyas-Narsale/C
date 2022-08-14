

#include<stdio.h>
#include <string.h>//for string

int strlenX(char str[])
{
	int iCnt=0;
	int iLength=0;
	for(iCnt=0;str[iCnt]!= '\0';iCnt++)
	{
		iLength++;
	}
	return iLength;
} 

int strlenXX(char str[])
{
	int iCnt=0;
	int iLength=0;
	while(str[iCnt]!= '\0')
	{
		iLength++;
		iCnt++;
	}
	return iLength;
}

int strlenXXX(const char *str)// Most Efficient Way
{// we use const then we cannot change data of Arr, Assurance to client that we caanot chnage data
	int iLength=0;
	while(*str != '\0')
	{
		iLength++;
		str++;
	}
	return iLength;
}

int main()
{
	int iLength=0;
	char Arr[10]={'\0'};
	
	printf("Enter Ur Name:\n");
	scanf("%[^'\n']s",&Arr);
	
	iLength=strlenX(Arr);
	printf("Length of Arr with strlenX is:%d\n",iLength);
	
	iLength=strlenXX(Arr);
	printf("Length of Arr with strlenXX is:%d\n",iLength);
	
	iLength=strlenXXX(Arr);
	printf("Length of Arr with strlenXXX is:%d\n",iLength);
	
	return 0;
}