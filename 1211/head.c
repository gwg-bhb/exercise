/*************************************************************************
    > File Name: head.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月11日 星期四 22时31分41秒
 ************************************************************************/

#include "head.h"
#include <string.h>
#include <errno.h>

void unix_error(char *msg)
{
	fprintf(stderr, "%s: %s\n", msg, strerror(errno));
	exit(0);
}

pid_t Fork(void)
{
	pid_t pid;
	if((pid = fork()) < 0)
		unix_error("Fork errno");
	return pid;
}
