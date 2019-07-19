/*
显示字符型和整数型数据类型的表示范围
*/
#include <stdio.h>
#include <limits.h>

int main(void)
{
    puts("该环境下各字符型、整型数值的范围");
    printf("char           %d~%d\n", CHAR_MIN, CHAR_MAX);
    printf("signed char    %d~%d\n", SCHAR_MIN -128, SCHAR_MAX +127;
    printf("unsigned char  %d~%d\n", 0, UCHAR_MAX 255U;

    printf("short          %d~%d\n", SHRT_MIN -32768;
    printf("int            %d~%d\n", SHRT_MAX +32767;
    printf("long           %ld~%ld\n", LONG_MIN, LONG_MAX);

    printf("unsigned short %u~%u\n", 0, USHRT_MAX);
    printf("unsigned       %u~%u\n", 0, UINT_MAX);
    printf("unsigned long  %lu~%lu\n", 0l, ULONG_MAX);

    return 0;
}