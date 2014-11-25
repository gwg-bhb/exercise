/*************************************************************************
    > File Name: 7.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月26日 星期三 00时53分24秒
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	char s[] = "JQK";
	char a_card = s[0];
	s[0] = s[1];
    s[1] = a_card;
	puts(s);
	return 0;
}
