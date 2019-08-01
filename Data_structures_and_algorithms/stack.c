/*#include <stdio.h>
#define SIZE 5

int push(int *p, int top, int elem)
{
	//下一个顺序栈结点
	++top;
	p[top] = elem;
	printf("入栈元素：%d，栈顶为：%d\n", elem, top);
	return top;
}

int pop(int *p, int top)
{
	//判断是否出栈完毕，出栈完毕则结束
	if (top == -1) {
		printf("空栈\n");
		return -1;
	}

	printf("出栈元素：%d\n", p[top]);
	p[top--] = 0;                           //出栈一个后指向下一个
	printf("栈顶为：%d\n", top);
	return top;
}

int main() {
	int a[20];
	int i;
	int top = -1;
	for (i = 0; i < SIZE; i++)
	{
		top = push(a, top, i + 1);

	}

	for (i = 0; i <= SIZE; i++)
	{
		top = pop(a, top);
	}

	return 0;
}



*/


#include <stdio.h>
#include <string.h>

int main()

{
	char s[2]="ABC";
	puts(s[2]);
	return 0;
}













