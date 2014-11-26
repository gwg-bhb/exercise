/*************************************************************************
    > File Name: 4.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月27日 星期四 00时59分34秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s0[] = "dysfunctional";
	char s1[] = "fun";
	if(strstr(s0, s1))
		printf("find it\n");
	return 0;
}
