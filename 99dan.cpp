#include <stdio.h>
int main()
{
	int a=1;
	int b=2;
	for (b=2;b<10;b++)
	{
		printf ("%d단 구구단\n",b);
		for(a=1;a<10;a++)
		{
			printf("%d * %d = %d\n",b,a,b*a);
		}
	}
	return 0;
}
