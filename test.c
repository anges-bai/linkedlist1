void main ()
{	
	struct Node *pFind ;
	//创建5个节点
	for(i=0;i<6;i++)
	AddListTill(i);
	
//	AddListRand(4,14);		//在指定位置4增加节点14
//	DeleteListTail();		//删除一个尾结点
	DeleteListRand(4);		//删除4节点
	ScanList();				//便利输出链表
	FreeList();				//删除链表
/*	pFind = FindNode(5);	//查找5节点

	if (pFind !=  NULL)
	{
		printf("找到%d\n",pFind->a);	//找到节点并且输出该节点数据
	}
	else
	{
		printf("No Find!\n");
	}

*/

}
