//通过指针间接修改身高

#include <stdio.h>
void hiroko(int *height)
{
	if(*height<180)
		*height=180;
}

int main()
{
	int sato=178;
	int sanaka=175;
	int masaki=179;

	hiroko(&masaki)

	printf("佐藤的身高%d\n", sato);
	printf("佐中的身高%d\n", sanaka);
	printf("真崎的身高%d\n", masaki);

	return 0;
}




