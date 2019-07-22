//编写如下函数，使字符串s显示n次。
#include <stdio.h>


void put_stringn(const char s[],int n){
	int i,j=0;


	

	for(i=0;i<n;i++)
	{
		while(str[j])
			putchar(str[j++]);
	}
};


int main()
{
	int n;
	char str[100];

	printf("请输入字符串：");
	scanf("%s",str);

	printf("请输入字符串显示次数：");scanf("%d",&n);

	put_stringn(str,n);

	return 0;
}