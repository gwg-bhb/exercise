/*************************************************************************
    > File Name: 7.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月10日 星期三 01时10分11秒
 ************************************************************************/

#include <stdio.h>
#include "head.h"
#include <sys/wait.h>

int main(void)
{
	if(0 == Fork())
	{
		printf("a");
	}
	else
	{
		printf("b");
		waitpid(-1, NULL, 0);
	}
	printf("c\n");
	return 0;
}
