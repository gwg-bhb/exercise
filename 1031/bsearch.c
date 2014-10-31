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

	int t[8] = {1,2,3,4,5,6,7,8};
    int  find = 0;
	scanf("%d",&find);
	int * result = bsearch(t, 8, find);
	if(result != NULL)
	{

	printf("the find num in it:");
	printf("the %d is %d\n",find,*result);
	}
	else
	{
		printf("the num is not int it");
		puts("\n");
	}
	return 0;
}
