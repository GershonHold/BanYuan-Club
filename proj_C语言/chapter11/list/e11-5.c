/*
    判断字符串的长度（使用指针遍历）
*/
#include <stdio.h>

/*返回字符串s的长度*/
int str_length(const char *s)
{
    int len = 0;
    while (*s++)
        len++;
    return len;
}

int main(void)
{
    char str[128];

    printf("请输入字符串：");
    scanf("%s", str);

    printf("字符串\"%s\"的长度是%d.\n", str, str_length(str));

    return 0;
}