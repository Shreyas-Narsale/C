

#include<stdio.h>
int Addition(int iNo1, int iNo2)
{
	
	int iAns=0;
	iAns=iNo1+iNo2;
	
	return iAns;
}


int main()
{
	int a=10, b=20;
	int iRet=0;
	
	iRet=Addition(a,b);
	printf(" Function Addition is:%d\n",iRet);
	
	int (*fptr)(int, int);
	printf("Address of Addition function:%d\n",Addition);
	fptr=Addition;//in Function name is save memory itself like array
	// so no need to use &
	iRet=fptr(a,b);//we use pointer like this , no other use than this
	printf(" Pointer Function Addition is :%d\n",iRet);
	
	//printf("Try to Find *fptr:%d\n",*fPtr);//error
	//we cannot find *fPtr gets error reason is *fPtr gives Binary Address of Addition function from Text Section
	
	return 0;
}

/*


int no=11;

int *p=&no;

int Addition(int ,int);

int (*fPtr)(int ,int);

reading fptr is a pointer which points to the function which accepts 2 parameters first is int and second is int,
and that function return int;

function have address in text
so we cannot find *fptr beacause fptr address is binary

iRet=fptr(int a, int b) //we can use fptr to call the function
*/


