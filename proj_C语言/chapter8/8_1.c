#include <stdio.h>
#define diff(x,y)((x>y)?printf("差值为%d\n", x-y):printf("差值为%d\n", y-x))

int main()
{
	int a=0,b=0;
	printf("请输入两个整数：\n");
	printf("第一个：");scanf("%d",&a);
	printf("第二个：");scanf("%d",&b);

	diff(a,b);
	return 0;
}