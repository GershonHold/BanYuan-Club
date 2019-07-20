#include <stdio.h>
#define type int
#define swap(type,a,b)(a=a+b;b=a-b;a=a-b;)

int main()

{
	type x,y;
	printf("请输入两个整数\n");scanf("%d",&x);scanf("%d",&y);
	swap(type,x,y)

	return 0;
}