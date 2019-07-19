
/*
    复制字符串（误例）
*/
#include <stdio.h>

/*将字符串s复制到d*/
void str_copy(char *d, const char *s)
{
    while (*d++ = *s++)
        ;
}

int main(void)
{
    char *ptr = "1234";
    char tmp[128];
    printf("ptr = \"%s\"\n", ptr);

    printf("复制的是：");
    scanf("%s", tmp);

    str_copy(ptr, tmp);

    puts("复制了。");
    printf("ptr = \"%s\"\n", ptr);

    return 0;
}