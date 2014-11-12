/*************************************************************************
    > File Name: c.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月12日 星期三 23时12分38秒
 ************************************************************************/

#include<stdio.h>


int accum = 0;
int sum(int x, int y)
{

	int t= x + y;
	accum += t;
	return t;
}
