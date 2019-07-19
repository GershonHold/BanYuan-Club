//将元素倒序排列


#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n) 
{
	int i,a[100]={0},b[100]={0};

    printf("请输入元素个数\n");
    scanf("%d",&n);

    for (int i = 0; i <n ; i++)
    {
        printf("第%d个整数：\n", i+1);
        scanf("%d",&a[i]);
    }

for (i = 0; i < n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n-1 - i];
        a[n-1 - i] = temp;
    }

    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }

printf("倒序后的数组为:\n");printf("{");
for(i=0;i<n;i++){
	printf("%d,", b[i]);
}
printf("}\n");
};


int main() {
	int i,n,a[100]={0},b[100]={0};

    
    intary_rcpy(b,a,n);
    return 0;
};