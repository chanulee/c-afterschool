#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d %d", &x, &y);
	printf("교환 전 x=%d이고 y=%d입니다.\n",x,y);
	
	z = y;
	y = x;
	x = z;
	/*방 바꾸기. =이거는 ==랑 다름. 대입하는거임.*/
	
	printf("교환 후 x=%d이고 y=%d입니다.",x,y);
}