

#include<stdio.h>

/////////////////////////////
//
// Function Name: Addition
// Input: two int
// Output:  int 
// Description : it is used to perform Addition
// Author: Shree Narsale
// Date: 05/03/2022
//////////////////////////////
int Addition(int iNo1, int iNo2)
{
	auto int iAns=0;
	
	iAns=iNo1+iNo2;
	return iAns;
}

//////////////////////////////
// Entry Point Function of Addition  Application
//////////////////////////////

int main()
{
	auto int iValue1=0, iValue2=0;
	auto int iRet=0;
	
	printf("Enter First Num:\n");
	scanf("%d",&iValue1);
	
	printf("Enter Second Num:\n");
	scanf("%d",&iValue2);
	
	iRet=Addition(iValue1,iValue2);
	
	printf("Addition is:%d\n",iRet);
	return 0;
}