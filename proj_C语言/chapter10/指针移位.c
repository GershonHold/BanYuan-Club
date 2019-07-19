#include <stdio.h>

int main()

{
	int a=100;
	int *pa=&a;
	float b=1.0;
	float *pb=&b;
	double b2=2.0;
	double *pb2=&b2;
	char c='A';
	char *pc=&c;

	printf("%p\n",pa);
	printf("%p\n",pb);
	printf("%p\n",pb2);
	printf("%p\n\n",pc);

	pa++;
	pb++;
	pb2++;
	pc++;

	printf("%p\n",pa);
	printf("%p\n",pb);
	printf("%p\n",pb2);
	printf("%p\n",pc);

	return 0;
}