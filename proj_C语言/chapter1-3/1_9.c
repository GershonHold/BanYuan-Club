#include <stdio.h>

int main() {
    int a, b, c;
    printf("请输入三个整数\n");
    scanf("%d,%d,%d", &a,&b,&c);
    printf("整数1:%d\n", a);
    printf("整数2:%d\n", b);
    printf("整数3:%d\n", c);
    printf("它们的和是%d\n", a + b + c);
    return 0;
}