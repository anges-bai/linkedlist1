
void AddListRand(int index,int a)
{	

    if (NULL==head)
	{
		printf("链表没有节点\n");
		return;
	}	
    struct Node* pt =FindNode(index);
	if(NULL==pt)    //没有此节点
	{
		printf("没有指定节点\n");
		return;
	}
    //有此节点
    //创建临时节点，申请内存
	struct Node* temp =(struct Node *)malloc(sizeof(struct Node));
	//节点成员进行赋值
	temp->a=a;
	temp->next=NULL;
	//连接到链表上 1.找到的节点在尾部 2.找到的节点在中间 
	if (pt == end)
	{
	//尾巴的下一个指向新插入的节点
	end->next=temp;
	//新的尾巴
	end=temp;
	}else
	{
	// 先连后面 （先将要插入的节点指针指向原来找到节点的下一个）
	temp->next=pt->next;
	//后连前面
	pt->next=temp;
	}

}
