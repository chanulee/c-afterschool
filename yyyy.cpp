#include <stdio.h>

int main()
{
	int yyyy;
	int mm;
	int dd;
	
	printf("오늘이 며칠이지-?");
	scanf("%d\.%d\.%d",&yyyy,&mm,&dd);
	printf("%02d.%02d.%02d",yyyy,mm,dd);
	
	return 0;
	
}