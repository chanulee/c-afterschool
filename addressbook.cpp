#include <stdio.h>

struct address 
{
	int phone_number;
	char name[10];
	//문자열
};


int main()
{
	address people1;

	printf("이름을 입력해주세요 : ");
	scanf("%s", people1.name);

	printf("-없이 전화번호를 입력해주세요 : ");
	scanf("%d", &(people1.phone_number) );

	printf("이름 : %d \n전화번호 : %d \n", people1.name, people1.phone_number);

	return 0;
}