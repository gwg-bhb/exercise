/*************************************************************************
    > File Name: bo2-2.cpp
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月23日 星期一 09时03分32秒
 ************************************************************************/

//带有头节点


void InitList(LinkList &L)
{
	//操作结果：构造空的线性表L
	
	L = (LinkList)malloc(sizeof(Lnode));
	if(L == NULL)
		exit(OVERFLOW);
	L->next = NULL; //头节点
}

void DestroyList(LinkList &L)
{
	//初始条件：线性表L已经存在
	//操作结果：将L销毁
	
    LinkList p;
    p = L;
	while(L)
	{
      L = L->next;
	  free(p);
	  p = L;
	}
	p = NULL;
	L = NULL;
}

void ClearList(LinkList &L)
{
	//初始条件：线性链表已经存在
	//操作结果：将L置位空表
	
	LinkList p, q;
	p = L->next;
	while(p)
	{
		q = p->next;
		free(p);
		p = q;
	}
	L->next = NULL;
}

Status ListEmpty(LinkList L)
{
	//初始条件:线性表已经存在L
	//操作结果：空返回TRUE，否则返回FALSE
	
	if(L->next == NULL)
		return TRUE;
	else
		return FALSE;
}

int ListLength(LinkList L)
{
	//初始条件：线性表L已经存在
	//操作结果：返回链表长度，不包括头节点
	
	int len = 0;
	LinkList p;
	p = L->next;
	while(p)
	{
		len++;
		p = p->next;
	}
	return len;
}

Status GetElem(LinkList L, int i, ElemType &e)
{
	//初始条件：线性链表L已经存在
	//操作结果：用e返回i个元素的值，并返回OK
	//          否则返回ERROR
	
	if( i < 1 || i > ListLength(L))
		return ERROR;  
	int j;
	LinkList p = L->next;
	for(j = 1; j < i; j++)
	{
		p = p->next;
	}

	e = p->data;
	return OK;
}

int LocateElem(LinkList L, ElemType e, Status(*compare)(ElemType, ElemType))
{
	//初始条件：线性表L已经存在，compare满足为1，否则为0
	//操作结果：返回与e符合compare关系的元素的位置，否则返回0
	
    int i = 1;
	LinkList p = L->next;
	while(p && !compare( e, p->data))
	{
       i++;
	p = p->next;
	}

	if(p)
		return 0;
	else
		return i;
}

Status PriorElem(LinkList L, ElemType cur_e, ElemType &pre_e)
{
	//初始条件：线性表L已经存在
	//操作结果：若cur—e是L的数据元素，并且不是第一个，则用pre——e返回前驱，并返回OK
	//           否则pre-e无定义，返回INFEASIBLE

	LinkList p = L->next,  q = L;

	while(p && p->data != cur_e)
	{
		q =  p;
		p = p->next;
	}
	if(p)
	{
		if(q->next != NULL)
		{
			pre_e = q->data;
			return OK;
		}
	}
	return INFEASIBLE;
}

Status NextElem(LinkList L, ElemType cur_e, ElemType &next_e)
{
	//初始条件：线性表L已经存在
	//操作结果：若cur_e是L中的元素，并且不是最后一个，则用next_e返回后继，并返回OK
	//          否则next_e无定义，返回INFEASIBLE
	
	LinkList p = L;
	LinkList q = p->next;

	while(p->data != cur_e && q)
	{
		p = q;
		q = q->next;
	}
	if(p->data == cur_e)
	{
		next_e = q->data;
		return OK;
	}
	return INFEASIBLE;
}

Status ListInsert(LinkList &L, int i, ElemType e)
{
	// 初始条件：线性表单链表L已经存在,带表头节点
	// 操作结果：在第i个元素之前插入e,返回Ok，否则返回ERROR
	
	int j;
	if( i < 1 || i > ListLength(L)+1)
		return ERROR;
	LinkList p = L->next, q = L;
	LinkList new_data = (LinkList)mallco(sizeof(Lnode));
	if(!new_data)
		return ERROR;
	new_data->data = e;
	new_data->next = NULL;
	for(j = 1; j < i; j++)
	{
	   q = p;
       p = p->next;
	}
    new_data->next = p;
	q->next = new_data;
    return OK;
}

Status ListDelete(LinkList &L, int i, ElemType &e)
{
	//初始条件：线性单链表L已经存在，含有头节点
	//操作结果：删除第i个元素，并且用e返回其值，并返回OK
	//          否则返回ERROR，e无定义
	int j;
	if(i < 1 || i > ListLength(L))
		return ERROR;
    LinkList p = L->next, q = L;
	for(j = 1 ; j <= i; j++)
	{
		q = p;
		p = p->next;
	}
    e = p->data;
	q->next = p->next;
	free(p);
}

void ListTraverse(LinkList L, void(*vi)(ElemType))
{
	//××× vi的形参类型为ElemType，而不是ElemType &
	//初始条件：线性表L已经存在
	//操作结果：依次对L中每个元素调用vi
	int len = ListLength(L);
	int i;
	LinkList p = L->next;
	for(i = 1; i < len; i++)
	{
		vi(p->data);
		p = p->next;
	}
}


