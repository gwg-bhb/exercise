/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月23日 星期日 00时21分38秒
 ************************************************************************/

#include<stdio.h>


void complain()
{
	puts("hello");
	return;   //return 除了可以用返回值外,还可以用做提前退出函数
	puts("world");
}

int main(void)
{
	complain();
	return 0;
}
