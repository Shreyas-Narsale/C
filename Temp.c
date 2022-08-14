

#include<stdio.h>

int main()
{
	int Arr[5]={10,20,30,40,50};
	
	void *Brr=Arr;
	//int *Crr=Arr+(sizeof((&Arr)+1));
	void *Crr=((&Arr)+1);
	printf("%d\n",Brr);
	printf("%d\n",Crr);
	printf("%d\n",((&Arr)+1));
	
	while(Brr<Crr)
	{
		printf("%d\t",*Brr);
		Brr++;
	}
	printf("Array Khatam");
		
	
	return 0;
}