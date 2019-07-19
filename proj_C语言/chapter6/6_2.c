//创建一个函数，返回三个int型整数中的最小值。

#include <stdio.h>

int min3(int a, int b, int c) {
    int min = a;
    if (a > b)
        min = b;
    if (min > c)
        min = c;
    return min;
};

int main() {
    int a, b, c, min;
    printf("请输入3个整数\n");
    scanf("%d,%d,%d", &a, &b, &c);
    int min3(int a, int b, int c);
    printf("最小值是%d\n", min3(a, b, c));
    return 0;
}