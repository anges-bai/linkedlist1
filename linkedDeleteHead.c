void DeleteListHead()
{	//记住旧头
	struct Node* temp=head;
	//链表检测 
	if (NULL==head)
	{
			printf("链表为空\n");
			return;
	}

	head=head->next;//头的第二个节点变成新的头
	free(temp);

}
