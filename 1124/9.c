/*************************************************************************
    > File Name: 9.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月25日 星期二 01时01分58秒
 ************************************************************************/

#include<stdio.h>

void skip(char *msg)
{
	puts(msg + 6);
}

int main(void)
{
	char s[] =  "Don't call me";
	skip(s);
	return 0;
}
