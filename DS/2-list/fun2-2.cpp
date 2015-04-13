/*************************************************************************
    > File Name: fun2-2.cpp
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年04月13日 星期一 21时35分02秒
 ************************************************************************/

int Malloc(SLinkList space)
{  // space 是空闲链表
	int i = space[0].next;
	if(i == 0)
		space[0].next  = space[i].next;
	return i;
}

void Free(SLinkList space, int k)
{
	space[k].next = space[0].next;
	space[0].next = k;
}
