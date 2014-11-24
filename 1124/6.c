/*************************************************************************
    > File Name: 6.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月25日 星期二 00时41分53秒
 ************************************************************************/

#include<stdio.h>


int main(void)
{
	char s[] = "How big is it?";
	char *t = s;
	if(s == &s)
	{
		printf("&s:%p\n", s);
	}
	if(t == &t)
	{
		printf("&t:%p\n", &t);
		printf("t: %p\n", t);
	}
	puts("----------------------------------");
	printf(" s:%p\n", s);
	printf("&s:%p\n", &s);
	printf(" t:%p\n", t);
	printf("&t:%p\n", &t);
	return 0;
}
