/*************************************************************************
    > File Name: bsearch.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年10月31日 星期五 12时32分41秒
 ************************************************************************/
//二叉查找,折半查找
#include<stdio.h>

int * bsearch(int *t, int n, int x)
{
	int low = 0;
	int hi = n;
	while(low < hi)
	{
		int mid = (low + hi)>>1;
		int *p = t + mid;
		if(x > *p)
		{
			low = mid + 1;
		}
		else if(x < *p)
		{
			hi = mid;
		}
		else
			return p;
	}
	return NULL;
}
int main()
{

	return 0;
}
