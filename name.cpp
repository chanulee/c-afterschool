#include <stdio.h>

int main()
{
	int score;
	char name[50];
	
	printf("이름이 뭔가요?");
	scanf("%s", &name);
	
	printf("점수 몇점?");
	scanf("%d", &score); 
	
	printf("%s님의 점수는 %d점 입니다.", name, score);
	
	return 0;
}