/*************************************************************************
    > File Name: 6.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月26日 星期三 00时44分11秒
 ************************************************************************/

#include<stdio.h>

#define MAX 81

int main(void)
{
	char name[MAX];
	char * ptr;
	printf("Hi, what is your nme?\n");
	ptr = fgets(name, sizeof(name), stdin);
	printf("%s? hi,nice to meet you, %s!\n", name, ptr);
	return 0;
}
