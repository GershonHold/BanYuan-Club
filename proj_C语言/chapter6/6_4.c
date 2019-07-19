#include <stdio.h>
#include <math.h>

int ant(int x)
{
	puts("请输入一个整数。");
    scanf("%d", &x);

	printf("x的四次幂是%d\n", (int)pow(x,1.0/4));
    return 0;
};


int main()
{
	int x=0;

	ant(x);
    return 0;
}