/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月24日 星期一 00时55分08秒
 ************************************************************************/

#include<stdio.h>


int num = 0;

int main(void)
{
	int x =  0;
	printf("num 地址:%p\n", &num);
	printf("x 地址:%p\n", &x);
	return 0;
}
