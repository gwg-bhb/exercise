/*************************************************************************
    > File Name: bo2-8.cpp
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年04月07日 星期二 10时28分20秒
 ************************************************************************/

//不带头节点


// DestroyList和ClearList的操作是一样的

void InitList(LinkList &L)
{
   //初始化
}

void ClearList(LinkList &L)
{
	//L已经存在，清空L
}

Status ListEmpty(LinkList L)
{
	//判断是否为空
}

int ListLength(LinkList L)
{
	// L已经存在，返回L中元素的数量
}

Status GetElem(LinkList L, int i, ElemType &e)
{
	//用e取回L中第i个元素的值
}

int LocateElem(LinkList L, ElemType e, Status(*compare)(ElemType, ElemType))
{
	//返回L中与e满足compare关系的第一个元素的位序，否则返回0
}

Status ListInsert(LinkList &L, int i, ElemType e)
{
	//在L中第i个元素前插入e，不带头结点
}

Status ListDelete(LinkList &L, int i, ElemType &e)
{
    //删除第i个元素，用e返回
}

void ListTraverse(LinkLis L, void (*vi)(ElemType))
{

	// 按照vi遍历操作L元素

}

Status PriorElem(LinkList L, ElemType cur_e, ElemType &prior_e)
{
	//返回前驱
}

Status NextElem(LinkList L, ElemType cur_e, ElemType &next_e)
{
	//返回后继
}
