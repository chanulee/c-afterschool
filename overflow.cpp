#include <stdio.h>

int main()
{
	int i = 123456;
	//넘치는 경우를 overflow라고 부름 
	float f = 3.14;
	double d = 123456789.1234;
	char name[10]="이찬우";
	
	printf("%s님의 점수입니다.\n", name);
	printf("i는 정수로 %d입니다.\n", i);
	printf("f는 실수로 %f입니다.\n", f);
	printf("d는 두배실수로 %10.2f 입니다.\n", d);
	
	return 0;
}