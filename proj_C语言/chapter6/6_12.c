#include <stdio.h>


void mat_mul(const int a[4][3], const int b[3][4], int c[3][3]) {

    int i, j, k, l,sum=0;
    for (i = 0; i <= 2; i++){ //b行列式的行
        for (k = 0; k <= 2; k++){
            for (j = 0; j <= 3; j++){  
                    sum += b[i][j] * a[j][k];
        }
        c[i][k]=sum;sum=0;
}

}
};

int main() {
	int i,j;
	int a[4][3]={1,1,1,1,1,1,1,1,1,1,1,1};
	int b[3][4]={1,1,1,1,1,1,1,1,1,1,1,1};
	int c[3][3]={0};

	mat_mul(a,b,c);

printf("{");
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
			printf("%d,",c[i][j]);
		printf("}");

	return 0;

}








