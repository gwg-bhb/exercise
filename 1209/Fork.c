/*************************************************************************
    > File Name: Fork.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月10日 星期三 00时51分21秒
 ************************************************************************/

#include "head.h"
#include <errno.h>
#include <string.h>

void unix_error(char *msg)
{
	fprintf(stderr, "%s: %s\n", msg, strerror(errno));
	exit(0);
}

pid_t Fork(void)
{
	pid_t pid;

	if((pid = fork()) < 0)
		unix_error("Fork error");
	return pid;
}
