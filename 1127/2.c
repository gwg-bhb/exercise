/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月28日 星期五 00时15分08秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

void reverse(char *s)
{
	int len = strlen(s);

	while(len >= 0)
	{
		printf("%c", *(s+len-1));
		len--;
	}
	puts("");
}

int main(void)
{
	char s[] = "hello good moring";
	reverse(s);
	return 0;
}
