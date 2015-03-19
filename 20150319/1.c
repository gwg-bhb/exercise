/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月19日 星期四 11时55分23秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int a(int i)
{
	if(i == 1)
	{
		printf("程序a\n");
		exit(1);
	}
	return i;
}

int main(void)
{
	int i;
	printf("i =");
	scanf("%d", &i);
	printf("a(i)=%d\n", a(i));
	return 0;
}
