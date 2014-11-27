/*************************************************************************
    > File Name: 8.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月27日 星期四 09时27分29秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>


int main(void)
{
	char s1[] = "hello good";
	char s0[] = "goo";
	char *s = strstr(s1, s0);
	puts(s);
	return  0;
}
