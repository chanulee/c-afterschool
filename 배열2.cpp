#include <stdio.h>

int main()
{
	int k, j;
	int m=0;
	int a[5];
	
	
	for(j=0;j<5;j++)
{
	for(k=0;k<5;k++)
		{
			m++;
			a[k]=m;
			printf("%d\t",a[k]);
		}
	printf("\n");
}
	return 0;
}