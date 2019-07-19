#include <stdio.h>


int main()

{
	char *p="123";
	printf("p=\"%s\"\n", p);
	p="456";//指针可以直接修改字符串
	printf("p=\"%s\"\n",p);
	return 0;
}