/*************************************************************************
    > File Name: main2-1.cpp
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月20日 星期五 19时24分41秒
 ************************************************************************/

#include "./../c1.h"
typedef int ElemType;
#include "c2-1.h"
#include "bo2-1.cpp"
#include "func2-3.cpp"

Status sq(ElemType c1, ElemType c2)
{
	//LocatElem()调用
	if(c1 == c2*c2)
		return TRUE;
	else
		return FALSE;
}

void db1(ElemType &c)
{
	//ListTraverse()调用
	c *= 2;
}

int main()
{
	Sqlist L;
	ElemType e,e0;
	Status i;
	int k, j;
	InitList(L);
	printf("初始化之后：L.elem=%lu L.length=%d L.listsize=%d \n",(long unsigned int)L.elem, L.length, L.listsize);
	for(j = 1; j <= 5;j++)
		i = ListInsert(L, 1, j);
	printf("在表头插入1~5之后，list表中的值依次为：");
	for(j = 0; j < L.length; j++)
		cout<< " " << *(L.elem+j);
	cout << endl;
	printf("L.elem=%lu L.length=%d L.listsize=%d\n",(long unsigned int)L.elem, L.length, L.listsize);
	i = ListEmpty(L);
	cout<<"L是否为空？i=" << i << "(1:是 0:否)\n";
	ClearList(L);
	printf("清空之后：L.elem=%lu L.length=%d L.listsize=%d\n",(long unsigned int)L.elem, L.length, L.listsize);
	i = ListEmpty(L);
	cout<<"L是否为空？i=" << i << "(1:是 0:否)\n";
    for(j = 1; j <= 10; j++)
		ListInsert( L, j, j);
	printf("在表尾插入1~10后，list表中的值依次为：");
	for(j = 0; j < L.length; j++)
	{
		cout << *(L.elem+j) << ' ';
	}
	cout << endl;
    printf("L.elem=%lu L.length=%d L.listsize=%d\n",(long unsigned int)L.elem, L.length, L.listsize);
    ListInsert(L, 1, 0);
	printf("在表头0后，list表中的值依次为：");
	for(j = 0; j < L.length; j++)
	{
		cout << *(L.elem+j) << ' ';
	}
	cout << endl;
    printf("realloc之后，L.elem=%lu L.length=%d L.listsize=%d\n",(long unsigned int)L.elem, L.length, L.listsize);
	GetElem(L, 5, e);
	cout << "第五个值为" << e << endl;
	for(j = 10; j <= 11; j++)
	{
		k = LocateElem(L, j, equal);
		if(k)
			printf("%d位于list中%d的位置\n", j, k);
		else
			printf("%d不存在与list中\n", j);
	}
	for(j = 3; j <= 4; j++)
	{
		k = LocateElem(L, j, sq);
		if(k)
			printf("%d的平方位于list中位置：%d\n", j, k);
		else
			printf("%d的平方不位于list中\n", j);
	}
	for(j = 1; j <= 2; j++)  //测试两头的前驱后继
	{
       GetElem(L, j, e0);
	   i = PriorElem(L, e0, e);
	   if(i == INFEASIBLE)
		   cout << "此元素" << e0 << "无前驱" << endl;
	   else
		   printf("此元素%d的前驱是%d\n", e0, e);
	}

	for(j = ListLength(L)-1; j <= ListLength(L); j++)
	{
		GetElem(L, j, e0);
		i = NextElem(L, e0, e);
		if(i == INFEASIBLE)
			printf("此元素%d无后继\n", e0);
		else
			printf("此元素%d的后继是%d\n", e0, e);
	}
	
	k = ListLength(L);
	for(j = k+1; j >= k; j--)
	{
		i = ListDelete(L, j, e);
		if(i == ERROR)
			printf("删除第%d个元素失败\n", j);
		else
			printf("删除第%d个元素成功，值为：%d\n", j, e);
	}

	printf("依次输出List的值:");
	ListTraverse(L, print1);
	printf("L的元素加倍后：");
	ListTraverse(L, db1);
	ListTraverse(L, print1);
	DestroyList(L);
	printf("销毁后：L.elem=%lu L.length=%d L.listsize=%d\n",(long unsigned int)L.elem, L.length, L.listsize);
	return 0;
}
