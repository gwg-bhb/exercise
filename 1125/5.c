/*************************************************************************
    > File Name: 5.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月26日 星期三 00时29分19秒
 ************************************************************************/

#include<stdio.h>


int main(void)
{
	char food[5];
	fgets(food, sizeof(food), stdin);
	puts(food);
	scanf("%s", food);
	printf("%s\n", food);
	return 0;
}
