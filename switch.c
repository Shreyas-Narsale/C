
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
	
	switch(iStd)
	{
		case 1:
			printf("Your Exam is at 8 Am\n");
			break;
			
		case 2:
			printf("Your Exam is at 9 Am\n");
			break;
			
		case 3:
			printf("Your Exam is at 10 Am\n");
			break;
			
		case 4:
			printf("Your Exam is at 11 Am\n");
			break;
			
		case 5:
			printf("Your Exam is at 12 Am\n");
			break;
			
		default:
			printf("Invalid standard\n");
	}
	
	return 0;
}