#include <stdio.h>
int calc( int a, int b, char op)
{
	switch(op)
	{
	case '+' : return a + b;
	case '-' : return a - b;
	case '*' : return a * b;
	case '/' : return a / b;
	case '%' : return a % b;
	}
}

int main()
{
	int dap;
	int a, b;
	char c;
	
	scanf("%d %d %c",&a,&b,&c);
	dap = calc(a, b, c);
	printf("%d\n", dap);
}