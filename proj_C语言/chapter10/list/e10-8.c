/*
将两个实数值互换（误例）
*/
#include <stdio.h>

/*将px、py指向的对象的值进行互换*/
void swap(int *px, int *py)
{
    int temp = *px;
    *px = *py;
    *py = temp;
}

int main(void)
{
    double da, db;

    puts("请输入两个实数。");
    printf("实数A："); scanf("%lf", &da);
    printf("实数B："); scanf("%lf", &db);

    swap(&da, &db);
    
    puts("互换了两数的值。");
    printf("实数A是%f。\n", da);
    printf("实数B是%f。\n", db);

    return 0;
}