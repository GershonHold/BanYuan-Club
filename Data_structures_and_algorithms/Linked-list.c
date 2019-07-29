#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
#define ADDNUM 9
#define ADDPOS 3
#define DELPOS 3
#define SEARCHNUM 3
#define MODIFYPOS 3
#define MODIFYNUM 27

typedef struct node
{
	int elem;
	struct node *next;
} Node;

//创建一个新节点
Node *initNode(Node *pre, int elem) {
	Node *node = (Node *)malloc(sizeof(Node));
	node->elem = elem;
	node->next = NULL;
	pre->next = node;
	return node;
}

//显示链表
void display(Node *p){
	Node *temp=p;
}



























