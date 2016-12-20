#include <stdio.h>

int sum(int a, int b)
{
	int hab;
	hab=a+b;
	return hab;
}

int main()
{
	int k;
	k=sum(10,20);
	printf("합:%d", k);
	return 0;
}
