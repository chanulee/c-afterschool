#include <stdio.h>

int main()
{
	int science;
	int math;
	int sum;
	char name[50];
	
	printf("이름이 뭔가요?");
	scanf("%s", &name);
	
	printf("수학 점수 몇점?");
	scanf("%d", &math); 
	
	printf("과학 점수 몇점?");
	scanf("%d", &science); 
	
	sum=math+science;
	
	printf("%s님의 이과 점수는 %d점 입니다.", name, sum);
	
	return 0;
}