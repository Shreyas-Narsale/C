
#include<stdio.h>

//Structure Declaration //No Memory allocated Here But Snagate Memory Kiti milnar ye
struct Demo
{
	int iNo;//we just declare structure ,so we cannot allocate memory
	float fValue;//so we cant inilize the variable inside structure
	int iValue;
	//double dNo=3.14;//Error We cant inilize inside stru
	
};
//structure madhe kuthalahi datatype theu shkato except void

int main()
{
	//Structure Object Creation
	struct Demo obj;//memory allocated here
	//Auto stoarge memory allocated in stck farme
	
	
	//Object Inilization
	obj.iNo=11;
	obj.fValue=10.11;
	obj.iValue=21;//(. ) Direct  Accessing Operator
	//(-> ) InDirect  Accessing Operator
	
	printf("iValue:%d\n",obj.iValue);//21
	printf("sizeof(obj):%d\n",sizeof(obj));//12
	
	return 0;
}
//structure holds hetrogenous elemnets
//struct reading
/* Demo is structure which holds int , float and iValue

when obj of structure created ,memory for members gets allocated
in order in which they are declaraed in the sequence
*/