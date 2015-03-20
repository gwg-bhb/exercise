/*************************************************************************
    > File Name: algo2-1.cpp
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月20日 星期五 20时59分13秒
 ************************************************************************/

#include "./../c1.h"
typedef int ElemType;
#include "c2-1.h"
#include "bo2-1.cpp"
#include "func2-3.cpp"

/*
void Union(Sqlist &La, Sqlist Lb)
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
*/

void MergeList(Sqlist La, Sqlist Lb, Sqlist &Lc)
{

	//La,Lb中的元素非递减排列
	//Lc中元素非递减排列,重复也合并进来
	int i, j, k;
	int La_len, Lb_len;
	ElemType a, b;

	La_len = ListLength(La);
	Lb_len = ListLength(Lb);
	InitList(Lc);
	i = 1;
	j = 1;
	k = 1;
	while(i <= La_len && j <= Lb_len)
	{
      GetElem(La, i, a);
	  GetElem(Lb, j, b);
	  if(a <=b )
	  {
		  ListInsert(Lc, k, a);
		  i++;
	  }
	  else
	  {
		  ListInsert(Lc, k, b);
		  j++;
	  }
	  k++;
	}
		while(i <= La_len)
		{
			GetElem(La, i, a);
			ListInsert(Lc, k, a);
			k++;
			i++;
		}
	   while(j <= Lb_len)
	   {
		   GetElem(Lb, j, b);
		   ListInsert(Lc, k, b);
		   k++;
		   j++;
	   }

}

int main()
{
	Sqlist La, Lb, Lc;
	int j;
	int a[4] = {3, 4, 6, 9};
	int b[7] = {1, 6, 7, 8, 11, 23, 79};
	InitList(La);
	InitList(Lb);
	for(j = 1; j <= 4; j++)
	{
     ListInsert(La, j, a[j-1]);
	}
	cout << "La = ";
//	for(j = 1; j <= ListLength(La); j++)
       ListTraverse(La, print1);
	for(j = 1; j <= 7; j++)
		ListInsert(Lb, j, b[j-1]);
	cout << endl << "Lb = ";
//	for(j = 1; j <= 5; j++)
		ListTraverse(Lb, print1);
	cout << endl;
	MergeList(La, Lb, Lc);
	printf("new Lc = ");
//	for(j = 1; j <= ListLength(La); j++)
		ListTraverse(Lc, print1);
	return 0;
}
