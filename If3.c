
/*
1- 8 am
2- 9 am
3- 10 am
4- 11 am
5- 12 am
*/

#include<stdio.h>

int main()
{
	auto int iStd=0;
	
	printf("Enter Your Standard:\n");
	scanf("%d",&iStd);
	
	if(iStd==1)
	{
		printf("Your Exam is at 8 Am\n");
	}
	else if(std==2)
	{
		printf("Your Exam is at 9 Am\n");
	}
	else if(std==3)
	{
		printf("Your Exam is at 10 Am\n");
	}
	else if(std==4)
	{
		printf("Your Exam is at 11 Am\n");
	}
	else if(std==5)
	{
		printf("Your Exam is at 12 Am\n");
	}
	else
	{
		printf("InValid Standard\n");
	}
	
	return 0;
}