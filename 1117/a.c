/*************************************************************************
    > File Name: a.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月17日 星期一 23时29分45秒
 ************************************************************************/

#include<stdio.h>


int main(void)
{

    int i = 10;
	printf("i = %d\n", i);
	i += 2;
	puts("i + 2:");
	printf("%d\n", i);
	i -= 3;
	puts("i - 3:");
	printf("%d\n", i);
	i++;
	printf("i++=%d", i);
	puts("");
	i--;
	printf("i--=%d",i);
	puts("");
	return 0;
}
