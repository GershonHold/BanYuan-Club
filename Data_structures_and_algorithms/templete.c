/*
    双向链表
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define ADDNUM 9
#define ADDPOS 3
#define DELPOS 3
#define SEARCHNUM 3
#define MODIFYPOS 3
#define MODIFYNUM 27

int length;

typedef struct node {
    struct node *pre;
    struct node *next;
    int elem;
} Node;

/*创建一个结点*/
Node *initNode(Node *pre, int elem) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->pre = NULL;
    node->next = NULL;
    node->elem = elem;

    //和前结点建立双层逻辑
    node->pre = pre;//当前结点的pre指针指向前结点
    pre->next = node;//前结点的next指针指向当前结点

    return node;
}

/*显示链表*/
void display(Node *p) {
    Node *temp = p;
    printf("共%d个元素：", length);

    while (temp->next) {
        temp = temp->next;
        printf("  %d  ", temp->elem);

        if (temp->next) {
            printf("<-->");
        }
    }

    printf("\n");
}

/*找到指定位置的上一个节点*/
Node *getPreNode(Node *head, int pos, int min , int max) {
    if (pos > max   || pos < min) {
        printf("位置有误\n");
        return NULL;
    }

    Node *temp = head;

    for (int i = 0; i < pos; i++) {
        temp = temp->next;
    }

    return temp;
}

/*增*/
void add(Node *head, int elem, int pos) {
    Node *pre = getPreNode(head, pos, 0, length);

    if (pre == NULL) {
        return;
    }

    Node *next = pre->next;//需要插入位置的后结点

    //创建一个新结点
    Node *add = (Node *)malloc(sizeof(Node));
    add->elem = elem;

    //和前结点建立双层逻辑
    add->pre = pre;
    pre->next = add;

    //和后结点建立双层逻辑
    add->next = next;
    next->pre = add;

    length ++;//表长度+1
}

/*删*/
void delete(Node *head, int pos) {
    Node *pre = getPreNode(head, pos, 0, length - 1);

    if (pre == NULL) {
        return;
    }

    Node *del = pre->next;//需要删除的结点
    Node *next = del->next;//需要删除结点的后结点

    pre->next = next;//将前结点的next指针指向后结点
    next->pre = pre;//将后结点的pre指针指向前结点

    free(del);//释放删除结点空间
    del = NULL;
    length --;//表长度-1
}

/*查*/
int search(Node *p , int elem) {
    int i = 0;
    Node *temp = p;

    while (temp->next) {
        temp = temp->next;

        if (temp->elem == elem) {
            return i ;
        }

        i++;
    }

    return -1;
}

/*改*/
void modify(Node *p, int pos, int val) {
    Node *temp = p;

    for (int i = 0; i <= pos ; i++) {
        temp = temp->next;
    }

    temp->elem = val;
}

int main() {
    Node *head;//创建头结点指针
    Node *pre = head;//将头结点作为首元结点的前一个结点

    for (int i = 0; i < SIZE; i++) {
        pre = initNode(pre, i + 1);
    }

    //length = SIZE;

    display(head);

    printf("链表中第3个结点的直接前驱是：%d\n", head->next->next->next->pre->elem);

    printf("在第%d个位置上插入元素%d。\n", ADDPOS, ADDNUM);
    add(head, ADDNUM, ADDPOS);
    display(head);

    printf("删除第%d个位置上元素\n", DELPOS);
    delete(head, DELPOS);
    display(head);

    printf("查找元素%d的位置\n", SEARCHNUM);
    printf("元素%d的为第%d个\n", SEARCHNUM, search(head, SEARCHNUM));

    printf("把位置%d上的元素修改为%d\n", MODIFYPOS, MODIFYNUM);
    modify(head, MODIFYPOS, MODIFYNUM);
    display(head);

    return 0;
}