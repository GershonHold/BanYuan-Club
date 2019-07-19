
//复制字符串





#include <stdio.h>

char* str_copy(char *d, const char *s)
{
    char *t = d;
    while (*d = *s) {
        d++; s++;
    }
    return t;
}

int main()

{
    char str[128] = "ABC";
    char tmp[128];
    printf("str=\"%s\"\n", str);

    printf("复制的是：");
    scanf("%s", tmp);

    str_copy(str, tmp);

    puts("复制了：");
    printf("str=\"%s\"\n", );

    return 0;
}





