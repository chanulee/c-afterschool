#include <stdio.h>

int main()
{
	int k, e, m;
	
	printf("국어 점수 : ");
	scanf("%d", &k);
	printf("영어 점수 : ");
	scanf("%d", &e);
	printf("수학 점수 : ");
	scanf("%d", &m);
	
	int t = k+e+m;
	int a = t/3;
	
	printf("총점은 %d\n", t);
	printf("평균은 %d\n", a);
		
	if(a>=90)
	{
		printf("우등생입니다");
	}

	else if(60<=a && a<90)
	{
		printf("보통 수준입니다");
	}
	else if(a<60)
	{
		printf("재수강이 필요합니다.");
	}
	
	return 0;
}
