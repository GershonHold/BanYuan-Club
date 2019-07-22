#include <stdio.h>
#define N 10

int str_char(const char s[N], int c) {

	int i;

	for (i = 0; i < N; i++)
		if (s[i] == 'c')
			c = i + 1;
	printf("%d\n", c);

	if(c==0&&i==9)
		printf("-1");
	
};


int main()

{
	char s[N] = "daafdvchfg";
	int c = 0, i;

	str_char(s[N], c);
	return 0;
}