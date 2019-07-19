#include <stdio.h>
int main()
{
	int a=100;
	int *p=&a;
	int **q=&p;

	printf("%p %p %p %p\n", &a,p,&q,&*q);
}