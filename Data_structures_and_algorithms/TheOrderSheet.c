#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *head;
    int length;
    int capacity;
} Toslist; //Toslist类型


//初始化顺序表
Toslist initSeqlist() {
    Toslist list;
    list.length = 0;
    list.capacity = 5;
    list.head = (int *)malloc(10 * sizeof(int));

    if (!list.head)
    {
        printf("初始化失败！\n");
        exit(0);
    }
    return list;
}

//打印顺序表
void displayList(Toslist list) {
    for (int i = 0; i < list.length; i++) {
        printf("%d  ", list.head[i]);
    }
    printf("\n");
}

//增加元素
Toslist add(Toslist list, int elem, int pos) {
    if (list.length == list.capacity) {
        int *temp = (int *)realloc(list.head, (list.capacity + 1) * sizeof(int));//判断空间是否足够，不够就另建链表

//不直接用head而引入temp的作用：防止空间分配失败导致head失去原来的链表
        if (!temp) {
            list.head = temp;
            list.capacity += 1;
        }
    }

    //插入位置及以后的元素后移

    for (int i = list.length - 1; i >= pos; i--) {
        list.head[i + 1] = list.head[i];
    }
    list.head[pos] = elem;
    list.length ++;
    return list;

    if (pos > list.length || pos < 0)
        printf("插入位置错误！\n");
    return list;
}

//删除元素
Toslist delete(Toslist list, int pos) {

    for (int i = pos; i < list.length - 1; i++) {
        list.head[i] = list.head[i + 1];
    }

    list.length--;

    return list;

    if (pos < 0 || pos > list.length) {
        printf("删除位置有误！\n");
        return list;
    }
}


//查
int search(Toslist list, int elem) { //elem是查找的元素
    //顺序查找
    for (int i = 0; i < list.length; i++) {
        if (elem == list.head[i]) {
            return i;
        }
    }
    return 0;
}


//改
Toslist modify(Toslist list, int elem, int val) { //val是要替换它的元素
    int pos = search(list, elem); //获取要替换元素的位置
    list.head[pos] = val;
    return list;
}

int main() {
    Toslist list = initSeqlist();
    int Addpos = -1, Addnum, Delpos, Serachnum,Modifynum;

    printf("请输入5个整数元素\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &list.head[i]);
        list.length++;
    }

    printf("顺序表中的元素有：\n");
    displayList(list);

    //插入元素
    printf("要在哪个元素后插入元素？\n");
    while (Addpos < 0 || Addpos > list.length) {
        scanf("%d", &Addpos);

        if (Addpos < 0 || Addpos > list.length)
            printf("请输入正确的位置！\n");
    };

    printf("请输入需要插入的元素：\n"); scanf("%d", &Addnum);
    printf("在顺序表的第%d个元素后插入元素%d得到\n", Addpos, Addnum);
    list = add(list, Addnum, Addpos);

    displayList(list);


    //删除元素
    printf("要删除顺序表下标顺序中哪个元素？\n"); scanf("%d", &Delpos);
    printf("删除后得到：\n");

    list = delete(list, Delpos);
    displayList(list);


    //查找
    printf("请输入需要查找的元素\n"); scanf("%d", &Serachnum);

    int pos = search(list, Serachnum);
    if(pos)
        printf("元素%d的位置为第%d个\n", Serachnum, pos+1);
    if(!pos){
        printf("表中无该元素\n");
    }


    //修改
    printf("请输入需要修改的元素：\n");scanf("%d",&Serachnum);
    printf("请输入要替换的数：\n");scanf("%d",&Modifynum);
    printf("将%d修改为%d得到：\n", Serachnum, Modifynum);
    list = modify(list, Serachnum, Modifynum);
    displayList(list);

    free(list.head);
    list.head = NULL;

    return 0;
}
















