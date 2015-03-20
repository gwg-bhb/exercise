/*************************************************************************
    > File Name: bo2-1.cpp
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月20日 星期五 10时15分09秒
 ************************************************************************/


void InitList(Sqlist &L)
{
	//操作结果：构造出一个空的顺序链表L
	//分配失败，直接退出exit
	//对指针赋值
}

void DestroyList(Sqlist &L)
{
	//初始条件：顺序线性表已经存在
	//操作结果：销毁顺序线性表L
}

void ClearList(Sqlist &L)
{
	//初始条件：线性表L已经存在
	//操作结果：将L重置为空表
}

Status ListEmpty(Sqlist L)
{
	//初始条件：线性表L已经存在
	//操作结果：若L为空，返回TRUE，否则返回FALSE
}

int ListLength(Sqlist L)
{
	//初始条件：线性表L已经存在
	//操作结果：返回L的长度
}

Status GetElem(Sqlist L, int i, ElemType &e)
{
	//初始条件：顺序表L已经存在，i是否合法
	//操作结果：用e返回第i个元素值
}
int LocateElem(Sqlist L, ElemType e, Status (*compare)(ElemType,ElemType))
{
    //初始条件：线性表L已经存在
	//操作结果：返回L中第一个与e满足关系compare()的位序，
	//          若不存在，则返回0
}

Status PriorElem(Sqlist L, ElemType cur_e, Elemtype &pre_e)
{
    //初始条件：线性表L已经存在
	//操作结果：若cur_e是L的数据元素，并且不是第一个，则用pre_e返回前驱
	//          否则失败，返回INFEASIBLE
}

Status NextElem(Sqlist L, ElemType cur_e, ElemType &next_e)
{
	//初始条件：线性表L已经存在
	//操作结果：若cur_e是L的数据，并且不是最后一个，则用next_e返回后继
	//          否则失败，返回INFEASIBLE
}

Status ListInsert(Sqlist &L, int i, ElemType e)
{
	//初始条件：线性顺序表L已经存在,1<=i<=ListLength(l)+1
	//操作结果：在L中的第i个位置之前插入新的元素e，L的长度+1
	//realloc函数
}

Status ListDelete(Sqlist &L, int i, ElemType &e)
{
	//初始条件：线性顺序表L已经存在，1<=i<=ListLength(L)
	//操作结果：删除L的第i个数据，并用e返回它的值，L的长度-1
}

void ListTraverse(Sqlist L, void(*vi)(ElemType &))
{
	//初始条件：线性顺序表L已经存在
	//操作结果：依次对L的每个数据元素调用函数vi()
	//      vi()的形参加&，表明可以通过vi()改变元素的值
}
	
