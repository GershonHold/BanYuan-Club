#include <stdio.h>

int main()
{
	char str[20]="banyuanclub";

	char *s1=str;
	char *s2=str+2;

	printf("s1=%s\n", s1);
	printf("s2=%s\n", s2);

	char c1=str[4];
	char c2=*str;
	char c3=*(str+4);
	char c4=*(str+2);
	char c5=*str+2;
	char c6=(str+1)[5];

	printf("c1=%c\n", c1);
	printf("c2=%c\n", c2);
	printf("c3=%c\n", c3);
	printf("c4=%c\n", c4);
	printf("c5=%c\n", c5);
	printf("c6=%c\n", c6);
	return 0;
}		





/*执行结果：s1=banyuanclub
s2=nyuanclub
c1=u
c2=b
c3=u
c4=n
c5=d
c6=n*/








