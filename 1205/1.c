/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月05日 星期五 12时35分10秒
 ************************************************************************/

#include <stdio.h>

void f(void);

int x = 1;
int y = 2;

int main(void)
{
	printf("x = 0x%x ,y = 0x%x\n", x, y);
	f();
	printf("x = 0x%x ,y = 0x%x\n", x, y);

	return 0;
}
