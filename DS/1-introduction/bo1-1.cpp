/*************************************************************************
    > File Name: bo1-1.cpp
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月18日 星期三 20时45分28秒
 ************************************************************************/

#include "c1-1.h"

Status InitTriplet(Triplet &T, ElemType v1, ElemType v2, Elemype v3)
{
	//  操作结果：构造三元组，依次置T的3个元素的初始值为v1，v2，v3
	//成功返回OK，分配失败返回OVERFLOW

	T = (Triplet)malloc(3*sizeof(ElemType));
	if(T == NULL)
		return OVERFLOW;
	T[0] = v1;
	T[1] = v2;
	T[2] = v3;
	return OK;
}


Status DestroyTriplet(Triplet &T)
{
	// 操作结果：销毁三元组T
	// sucess return ok
	
	free(T);
	T = NULL;
	return OK;
}

Status Get(Triplet T, int i, ElemType &e)
{
	//初始条件：三元组已经存在，1<=i<=3。
	//操作结果：用e返回T的第i个值
	//fail return ERROR
	//sucess return OK
	
    if(1 > i || i > 3)
		return ERROR;
	e = T[i-1];
	return OK;
}


Status Put(Triplet T, int i, ElemType e)
{
	//初始条件：三元组已经存在，1<=i<=3
	//操作结果：改变T中i元素的值为e
	//fail return ERROR
	//sucess return OK
	
	if(1 > i || i > 3)
		return ERROR;
	T[i-1] = e;
	return OK;
}

Status IsAscending(Triplet T)
{
	//初始条件：三元组已经存在
	//操作结果：如果T按照升序排列，返回1（OK），否则返回0
	
	return (T[0] <= T[1] && T[1] <= T[2]);
}

Status IsDescending(Triplet T)
{
	//同上
	//按降序排列返回1，否则返回0
	
	return (T[0] >= T[1] && T[1] >= T[2]);
}

Status Max(Triplet T, ElemType &e)
{
	//求三元组T的最大值，用e返回
	//sucess return OK
	
	e = (T[0] >= T[1]) ?(T[0] >= T[2] ? T[0] : T[2]) : (T[1] >= T[2] ? T[1]:T[2]);

	return OK;
}


Status Min(Triplet T, ElemType &e)
{
	//求最小值,用e返回
	//sucess return OK
	
	e = (T[0] <= T[1])?(T[0] <= T[2] ? T[0] : T[2]) : (T[1] <= T[2] ? T[1] : T[2]);
}
