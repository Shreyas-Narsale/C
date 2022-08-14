
/*
0-10 =   100
10-40 =  500
40- =   300
*/

#include<stdio.h>

int main()
{
	auto int iAge=0;
	
	printf("Enter Your Age:\n");
	scanf("%d",&iAge);
	
	if((iAge >=0) && (iAge<=10))
	{
		printf("Your Ticket Amount is: 100\n");
	}
	else if((iAge >10) && (iAge<=40))
	{
		printf("Your Ticket Amount is: 500\n");
	}
	else if(iAge>40)
	{
		printf("Your Ticket Amount is: 300\n");
	}
	
	return 0;
}