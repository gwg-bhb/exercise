/*************************************************************************
    > File Name: 5.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月09日 星期二 00时10分23秒
 ************************************************************************/
//  异或加密算法
#include <stdio.h>
#include <string.h>

void encrypt(char *message)
{
	char c;
	while(*message)
	{
		*message = *message ^ 31;
		message++;
	}
}

int main(void)
{
	char s[] = "hello world";
	printf("strlen s = %lu\n", strlen(s));
	printf("sizeof s = %lu\n", sizeof(s));
	puts(s);
	encrypt(s);
	puts(s);
	encrypt(s);
	puts(s);
	return 0;
}
