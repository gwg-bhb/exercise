/*************************************************************************
    > File Name: a.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月16日 星期日 00时17分30秒
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	int num = 0;
	scanf("%d", &num);
	if(num < 1)
	{
		puts("输入有误");
		return 1;
	}
	printf("一共牌数有%d\n", (num * 52));
	return 0;
}
