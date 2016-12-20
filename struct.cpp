#include <stdio.h>

//스트럭쳐 컬렉션. 정의 모아놓은 것들. 자료형을 만듦.

typedef struct st 
{
	int aa;
	int bb;
};


int main()
{
	int over;

	//temp 변수를 만든다.

	st temp;

	//int느낌?

	temp.aa = 10;
	temp.bb = 20;

	printf("temp.aa is %d and temp.bb is %d", temp.aa, temp.bb);


	return 0;
}