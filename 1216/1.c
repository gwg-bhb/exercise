/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月17日 星期三 00时24分27秒
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>

int main(void)
{
	pid_t pid;
    if((pid = fork()) == 0)
	{
		pause();
		printf("control should never rreach here\n");
		exit(0);
	}
	kill(pid, SIGKILL);
	return 0;
}
