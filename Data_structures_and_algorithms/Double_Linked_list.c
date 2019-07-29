

























//主函数
int main()
{
	Node *head;//创建头节点指针
	Node *pre = head; //将头节点的作为首元节点的前一个节点

	for (int i = 0; i < SIZE; i++) {
		pre = initNode(pre, i + 1);
	}

	length = SIZE;

	display(head);

	printf("链表中的第三个节点的直接前趋是：%d\n", head->next->next->next->pre->elem);

	printf("在第%d个位置插入元素%d\n", ADDPOS，ADDNUM);

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