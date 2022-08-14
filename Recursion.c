#include<stdio.h>

void Display(int no)
{
	int iCnt=1;
	while(iCnt<=no)
	{
		printf("*\n");
		iCnt++;
	}
}

void DisplayX(int no)
{
	static int iCnt=1;
	if(iCnt<=no)
	{
		printf("*\n");
		iCnt++;
		DisplayX(no);//Recursive call 
	}
}
	
int main()
{
	int iValue=3;
	DisplayX(iValue);
	printf("End of main");
	return 0;
}