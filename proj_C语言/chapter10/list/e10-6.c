//两个整数值互换

#include <stdio.h>

void swap(int *px, int *py)

{
	int temp=*px;
	*px=*py;
	*py=temp;
}


int main()
{
	int na,nb;

	puts("请输入两个整数：");
	printf("整数A：");scanf("%d",&na);
	printf("整数B：");scanf("%d",&nb);

	swap(&na,&nb);

	puts("互换了两数的值");
	printf("整数A是%d\n",na);
	printf("整数B是%d\n",nb);

	return 0;
}







