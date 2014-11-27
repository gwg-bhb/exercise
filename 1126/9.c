/*************************************************************************
    > File Name: 9.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月27日 星期四 09时56分40秒
 ************************************************************************/

#include <stdio.h>


int main(void)
{
	char s[10] = {};
	scanf("%s", s);
//	fgets(s, sizeof(s), stdin);
	for(int i = 0; i < sizeof(s); i++)
	   printf("%x ", s[i]);
	puts("");
	return 0;
}
