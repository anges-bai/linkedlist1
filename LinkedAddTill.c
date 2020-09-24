void AddListTill(int a )
{
		//创建一个节点
		struct Node* temp=(struct Node*)malloc(sizeof(struct Node));		//此处注意强制类型转换

		//节点数据进行赋值
		temp->a=a;
		temp->next=NULL;		
		
		//连接分两种情况1.一个节点都没有2.已经有节点了，添加到尾巴上
		if(NULL==head)
		{	

			head=temp;
		//	end=temp;
		}
		else
		{
		end->next=temp;
	//	end=temp;			//尾结点应该始终指向最后一个
		}
		end=temp;			//尾结点应该始终指向最后一个
}
