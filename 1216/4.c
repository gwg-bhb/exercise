/*************************************************************************
    > File Name: 4.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月17日 星期三 01时34分07秒
 ************************************************************************/

#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

void handle(int sig)
{
	printf("hello\n");
	exit(0);
}

int main(void)
{
	if(signal(SIGINT, handle) == SIG_ERR)
		error("signal error");
	pause();
	return 0;
}
