//比较用数组实现的字符串和用指针实现的字符串



#include <stdio.h>

int main()
{
	char str[]="ABC";//用数组实现的字符串
	char *ptr="ABC";//用指针实现的字符串

	printf("str=\"%s\"\n",str);//
	printf("ptr=\"%s\"\n",ptr);

	return 0;
}