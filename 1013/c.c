/*************************************************************************
    > File Name: c.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年10月15日 星期三 12时57分32秒
 ************************************************************************/

#include<stdio.h>


int main(void)
{

	int c = 0;
	char buf[BUFSIZ];
	setbuf(stdout, buf);
	while((c = getchar()) != EOF)
	{
	putchar(c);
	fflush(stdout);
	}
	return 0;
}
