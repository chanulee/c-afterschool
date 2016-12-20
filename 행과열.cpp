#include <stdio.h>

int main()
{
	int i,j;
	char a[10][10];
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<=i; j++)
		{
			a[i][j]='*';
		}
		for(j=i+1; j<5; j++)
		{
			a[i][j]=' ';
		}
 	}
 	
 	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
			printf("%c\t",a[i][j]);
			printf("\n");
		
 	}
	
	return 0;
}