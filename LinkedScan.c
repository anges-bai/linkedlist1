void ScanList()
{
	struct Node *temp =head;		//定义一个临时变量来指向头
	while (temp !=NULL)
	{
		printf("%d\n",temp->a);
		temp = temp->next;		//temp指向下一个的地址 即实现++操作
	}

}
