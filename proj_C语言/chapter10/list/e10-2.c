//显示对象的地址


#include <stdio.h>

int main()
{
	int n;
	double x;
	int a[3];

	printf("n的地址：%p\n",&n);
	printf("x的地址：%p\n",&x);
	printf("a[0]的地址：%p\n",&a[0]);
	printf("a[1]的地址：%p\n",&a[1]);
	printf("a[2]的地址：%p\n",&a[2]);

	return 0;
}