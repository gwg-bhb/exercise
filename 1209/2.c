/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月09日 星期二 16时13分30秒
 ************************************************************************/

#include <stdio.h>


if((pid = fork()) < 0)
{
	fprintf(stderr, "fork error:%s\n", strerror(errno));
	exit(0);
}


void unix_error(char *msg)
{
	fprintf(stderr, "%s :%s\n", msg, strerror(errno));
	exit(0);
}
pid_t Fork(void)
{
	pid_t pid;
	if((pid = fork()) < 0)
		unix_error("Fork error");
	return pid;
}

pid = Fork();
