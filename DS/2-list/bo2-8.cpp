/*************************************************************************
    > File Name: bo2-8.cpp
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年04月07日 星期二 10时28分20秒
 ************************************************************************/

//不带头节点


// DestroyList和ClearList的操作是一样的
#define DestroyList ClearList

void InitList(LinkList &L)
{
   //初始化

	L = NULL;

}

void ClearList(LinkList &L)
{
	//L已经存在，清空L
	
	LinkList p;
	p = L;
	if(L == NULL)
		return;
	else
	{
		while(L)
		{
			p = L->next;
			free(L);
			L = p;
		}
		L = NULL;
	}
}

Status ListEmpty(LinkList L)
{
	//判断是否为空
	if(L == NULL)
		return OK;
	else
		return ERROR;
}

int ListLength(LinkList L)
{
	// L已经存在，返回L中元素的数量
	
	int i = 0;
	for(i = 0; L != NULL; i++, L = L->next);

	return i;
}

Status GetElem(LinkList L, int i, ElemType &e)
{
	//用e取回L中第i个元素的值
	
	if(i > ListLength(L) || i < 1)
	{
		return ERROR;
	}
	else
	{
		int j = 1;
		LinkList p = L;
		while(j < i)
		{
			j++;
			p = p->next;
		}
		e = p->data;
		return OK;
	}
}

int LocateElem(LinkList L, ElemType e, Status(*compare)(ElemType, ElemType))
{
	//返回L中与e满足compare关系的第一个元素的位序，否则返回0
	// compare 返回ok和error
	LinkList p = L;
	int i = 1;
	if( p == NULL)
	{
		i = 0;
		return i;
	}
	while(compare(e, p->data) == ERROR && p != NULL)
	{
		i++;
		p = p->next;
	}
	if(p == NULL)
	{
		i = 0;
		return i;
	}
	return i;
}

Status ListInsert(LinkList &L, int i, ElemType e)
{
	//在L中第i个元素前插入e，不带头结点
	
	if(i > ListLength(L)+1 || i < 0)
		return ERROR;
	LinkList p;
	if(L == NULL)
	{
		p = (LinkList)malloc(sizeof(LNode));
		p->data = e;
		p->next = NULL;
		L = p;
	}
	else
	{
		LinkList q;
		p = L;
		int j = 1;
		while(j < i)
		{
			p = q;
			q = q->next;
			j++;
		}
		LinkList new_e = (LinkList)malloc(sizeof(LNode));
		new_e->data = e;
		new_e->next = q;
		p->next = new_e;
	}
	return Ok;
}

Status ListDelete(LinkList &L, int i, ElemType &e)
{
    //删除第i个元素，用e返回
	if(i > ListLength(L) || i < 1)
		return ERROR;
	LinkList p = L, q = NULL;
    int j = 1;
	while( j++ < i)
	{
		q = p;
		p = p->next;
	}

	e = p->data;

	q->next = p->next;
	free(p);
	return OK;
	
}

void ListTraverse(LinkLis L, void (*vi)(ElemType))
{

	// 按照vi遍历操作L元素
	
	LinkList p = L;
	while(p != NULL)
	{
		vi(p->data);
		p = p->next;
	}

}

Status PriorElem(LinkList L, ElemType cur_e, ElemType &prior_e)
{
	//返回前驱
	
	LinkList p = L, q = NULL;
	


}

Status NextElem(LinkList L, ElemType cur_e, ElemType &next_e)
{
	//返回后继
}
