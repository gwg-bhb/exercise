/*************************************************************************
    > File Name: 11.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月25日 星期二 01时10分30秒
 ************************************************************************/

#include<stdio.h>


int main(void)
{
	int s[] = {11, 2, 3};
	int a[5];
	int *t = s;
	s = t;
	return 0;
}
