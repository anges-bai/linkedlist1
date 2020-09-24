void DeleteListTail()
{ 
	if (NULL == end)
	{
		printf("链表为空，无需删除\n");
		return;
	}
	//链表不为空 
	//链表有一个节点
	 if (head==end)
	 {
		 free(head);
		 head=NULL;
		 end=NULL; 
	 }
	 else
	 {
		//找到尾巴前一个节点
		 struct Node* temp =head;
		 while (temp->next!=end)
		 {
			 temp = temp->next;
		 }
		 //找到了，删尾巴
		//释放尾巴
		 free(end);
		 //尾巴迁移
		 end=temp;
		 //尾巴指针为NULL
		 end->next=NULL;
	 }

}
