/*************************************************************************
    > File Name: 3.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月10日 星期三 00时48分31秒
 ************************************************************************/

#include <stdio.h>
#include "head.h"


int main(int argc, char *argv[])
{
	pid_t pid;
	int x = 1;

	pid = Fork();
	if(pid == 0)
	{
		printf("child:%d\n", --x);
		printf("child pid = %d\n", getpid());
		printf("child parent pid = %d\n", getppid());
		exit(1);
	}

	printf("parent:%d\n", ++x);
	printf("parent pid= %d\n", getpid());
    exit(1);
}
