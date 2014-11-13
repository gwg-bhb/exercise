/*************************************************************************
    > File Name: a.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月14日 星期五 00时11分10秒
 ************************************************************************/

#include<stdio.h>


int Sum(int *start, int count)
{
	int sum = 0;
	while(count)
	{
		sum += *start;
		start++;
		count--;
	}
	return sum;
}
