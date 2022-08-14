//Constant  Structure Object 
#include<stdio.h>
struct Demo
{
	int i;
	int j;
	float f;
};
union Hello
{
	int i;
	int j;
	float f;
};

int main()
{
	struct Demo dobj;
	union Hello hobj;
	
	dobj.i=11;
	dobj.j=21;
	
	hobj.i=11;//We lost This
	hobj.j=21;
	
	printf("sizeof struct:%d\n",sizeof(dobj));
	printf("sizeof union:%d\n",sizeof(hobj));
	
	printf("Demo::i  :%d\n",dobj.i);
	printf("Demo::i  :%d\n",dobj.j);
	printf("Hello::i:%d\n",hobj.i);//(Expected11) but gives 21
	printf("Hello::j  :%d\n",hobj.j);
	
	
	return 0;
}
