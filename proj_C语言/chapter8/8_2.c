#include <stdio.h>
#define max(x,y) (((x)>(y))?(x):(y))

int main()

{
	int a,b,c,d,max;

	printf("请输入四个整数值：\n");
	printf("第一个：");scanf("%d",&a);
	printf("第二个：");scanf("%d",&b);
	printf("第三个：");scanf("%d",&c);
	printf("第四个：");scanf("%d",&d);


	max=max(a,b);
	max=max(max,c);
	max=max(max,d);
	printf("四个数中最大的是%d\n",max);

	return 0;
}
