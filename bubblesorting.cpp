#include <stdio.h> 

int main()
{
	int a[7] = {534,124,673,23,45,67,1};
	int b;
	int c;
	int temp=0;

	for(b=0; b<7; b++)
	{
///수열
		a[b] = 2*b;
		printf("a[%d] is %d \n", b, a[b]); 
//
		for(c=0; c< 7-1; c++)
		{
			if(a[c]>a[c+1])
			{
				temp=a[c];
				a[c]=a[c+1];
				a[c+1]=temp;
			}
		}

	}
	for(b=0; b<7; b++)
		printf("a[%d] = %d \n", b, a[b]);
		
return 0;
}