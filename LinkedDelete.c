void DeleteListRand(int a)
{

	//链表判断 是不是没有东西
	if(NULL==head)
	{
	printf("链表没东西\n");
	return;
	}
    //链表有东西，找这个节点
	struct Node* temp =FindNode(a);
	if(NULL==temp)
	{
	printf("查无此点\n");
	return;
	}
	//找到了,且只有一个节点
	if(head==end)
	{
	free(head);
	head=NULL;
	end=NULL;
	}
	else if(head->next==end) //有两个节点
	{
	//看是删除头还是删除尾
	if(end==temp)
		{	DeleteListTail(); }
	else if(temp==head)
		{	DeleteListHead(); }	
	}
	else//多个节点
	{
		//看是删除头还是删除尾
		if(end==temp)
			DeleteListTail();
		else if(temp==head)
			DeleteListHead();	
		else	//删除中间某个节点
		{	//找要删除temp前一个，遍历
			struct Node*pt =head;
			while(pt->next!=temp)
			{
			pt=pt->next;
			}
			//找到了
			//让前一个直接连接后一个 跳过指定的即可
			 pt->next=temp->next;
			 free(temp);
		
		}
	}
	

}
