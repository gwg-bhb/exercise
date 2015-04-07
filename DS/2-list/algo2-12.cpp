/*************************************************************************
    > File Name: algo2-1.cpp
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月20日 星期五 20时59分13秒
 ************************************************************************/

#include "./../c1.h"
typedef int ElemType;
#include "c2-2.h"
#include "bo2-2.cpp"
#include "func2-3.cpp"

void Union(LinkList &La, LinkList Lb)
{
	//将Lb中的元素并入La中
	ElemType e;
	int La_len, Lb_len;
	int i;
	La_len = ListLength(La);
	Lb_len = ListLength(Lb);
	for(i = 1; i <= Lb_len; i++)
	{
		if(GetElem(Lb, i, e))
		{
		//	cout << e << " ";
			if(0 == LocateElem(La, e, equal))
			{
          //      cout << e << " " << endl;	
				ListInsert(La, ++La_len, e);
		}
		}
	}
}

int main()
{
	LinkList La, Lb;
	int j;
	InitList(La);
	InitList(Lb);
	for(j = 1; j <= 5; j++)
	{
     ListInsert(La, j, j);
	}
	cout << "La = ";
//	for(j = 1; j <= ListLength(La); j++)
       ListTraverse(La, print);
	for(j = 1; j <= 5; j++)
		ListInsert(Lb, j, 2*j);
	cout << endl << "Lb = ";
//	for(j = 1; j <= 5; j++)
		ListTraverse(Lb, print1);
	cout << endl;
	Union(La, Lb);
	printf("new La = ");
//	for(j = 1; j <= ListLength(La); j++)
		ListTraverse(La, print1);
	return 0;
}
