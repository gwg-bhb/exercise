/*************************************************************************
    > File Name: head.h
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月11日 星期四 22时28分44秒
 ************************************************************************/

#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <errno.h>

void unix_error(char *msg);
pid_t Fork(void);

