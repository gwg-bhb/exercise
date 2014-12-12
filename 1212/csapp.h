/*************************************************************************
    > File Name: csapp.h
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月12日 星期五 16时50分14秒
 ************************************************************************/

#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <pthread.h>

void unix_error(char *msg);
void posix_error(int, char *);
void dns_error(char *);
void app_error(char *);
