#include <stdio.h>

void alert(int n) {
    int i;
    
    for (i = 0; i < n; i++) {
        printf("\a");
    }

}

int main() {
	int m;

	printf("请输入响铃次数\n");
    scanf("%d", &m);
	alert(m);
	return
}

//系统限制响铃5次，但程序实际上会执行m次