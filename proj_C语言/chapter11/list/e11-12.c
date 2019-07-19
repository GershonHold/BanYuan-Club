//使用atoi函数



int main()

{
	char str[128];

	printf("请输入字符串：\n");
	scanf("%s",str);

	printf("转化为整数后为%d\n",atoi(str));

	return 0;
}