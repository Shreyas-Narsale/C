

#include<stdio.h>

int main()
{
	auto int iMarks=0;
	
	printf("Enter Your Marks:\n");
	scanf("%d",&iMarks);
	
	printf("Your entered marks:%d\n",iMarks);
	
	if(iMarks>=60)
	{
		printf("First Class\n");
	}
	else
	{
		printf("Not a First Class\n");
	}
	
	return 0;
}