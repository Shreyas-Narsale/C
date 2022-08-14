

#include<stdio.h>//import standard input output header file
//if your statement start with # statement is for preprocessor
//preprocessor la last la semicolan (;) naste
// # =preprocessor Directory Symbol
int Addition(int iNo1, int iNo2)//Function Defination
//line 7 is function prototype
//Function Prototype la last la Semicolon (;) naste
//jar takala tar te function tithe sampate 
//iNo1,iNo2=Function Argument
{//block chi survat
	int iAns=0;//local variable of Addition
	iAns=iNo1+iNo2;//statement berij kayli ALU ni
	
	return iAns;//jyani call kela tyla value thya
}//block cha end


int main()//call by os 
{//block chi survat
	int A=10;//local Variable of main
	int B=11;//local Variable of main
	//(;) =Delimiter use when 
	
	int C=0;//local Variable of main
	
	C=Addition(A,B);//Function call
	//save return value from Addition to C
	printf("%d",C);//output on cansole
	
	return 0;//OS la sanga Succcesfully Excuted.
	
}//block cha end