#include <stdio.h>

int main() {
    int a, b;
    printf("请输入两个整数\n");
    scanf("%d,%d", &a, &b);
    printf("整数1:%d\n", a);
    printf("整数2:%d\n", b);
    printf("它们的乘积是%d\n", a * b);
    return 0;
}