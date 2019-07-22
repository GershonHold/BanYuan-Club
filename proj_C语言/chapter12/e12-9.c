//汽车行驶
	#include <stdio.h>
	#include <math.h>

#define sqr(n)  ((n)*(n)) //计算平方

typedef struct //点的坐标的结构体
{
	double x;
	double y;
}Point;

typedef struct{//汽车的结构体
	Point pt;
	double fuel;
}Car;

double distance_of(Point pa,Point pb)//返回出发地目标地两点距离
{
	return sqrt(sqr(pa.x-pb.x)+sqr(pa.y-pb.y));
}


void put_info(Car c)//汽车当前状态：位置、燃料
{
	printf("当前汽车的位置%.2f,%.2f",c.pt.x,c.pt.y);
	printf("  当前汽车剩余油量%.2f\n",c.fuel);
}	

int move(Car *c,Point dest)
{
	double d=distance_of(c->pt,dest);
	if(d>c->fuel)
		return 0;
	else
	c->pt=dest;
	c->fuel-=d;
	return 1;
}


int main()
{
	Car mycar={{0.0,0.0},90.0};
	while(1){
		int select;
		Point dest;
		put_info(mycar);
		printf("是否开动汽车？(yes-1/no-0)");
		scanf("%d",&select);

		if(select!=1)break;
		printf("请输入目的地坐标(用空格隔开)：");scanf("%lf %lf",&dest.x,&dest.y);

		if(!move(&mycar,dest))
			puts("燃料不足无法行驶！");
	}
	return 0;
}








