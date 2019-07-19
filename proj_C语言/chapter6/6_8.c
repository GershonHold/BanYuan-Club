//创建一个函数，返回元素个数为 n 的 int 型数组 v 中的最小值。
//数组的传递

#include <stdio.h>
#define N 10


int min_of(const int v[], int n) {
    int i;
    int min = v[0];

    for (i = 1; i < n; i++)
        if (v[i] < min)
            min = v[i];
    return min;
}

int main(void) {
    int i;

    int min;
    int a[N];
    printf("请输入10个元素个数\n"); 
    for (i = 0; i < N; i++) {
        printf("第%d个", i + 1); scanf("%d", &a[i]);
    }

    min = min_of(a, N);

    printf("数组的最小值是%d\n", min);

    return 0;
}