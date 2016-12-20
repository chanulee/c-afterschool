#include <stdio.h>

int main()
{
	int k;
	//k라는 방이 있다 
	int a[5];
	/*정수형 방 5개를 준비했다.
	0.1.2.3.4. c는 시작이 0이다.*/ 
	for(k=0;k<5;k++)
		{
			scanf("%d", &a[k]);
			printf("%d\n",a[k]);
		}
	return 0;
}