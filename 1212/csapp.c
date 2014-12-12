/*************************************************************************
    > File Name: csapp.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月12日 星期五 16时49分54秒
 ************************************************************************/

#include "csapp.h"

void app_error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(0);
}

void  unix_error(char *msg)
{
    fprintf(stderr, "%s:%s\n", msg, strerror(errno));
	exit(0);
}
void Kill(pid_t pid, int signum)
{
	int rc;
	if((rc = kill(pid, signum)) < 0)
		unix_error("Kill error");
}


void posix_error(int code, char *msg)
{
	fprintf(stderr, "%s:%s\n", msg, strerror(code));
	exit(0);
}
void Pthread_detach(pthread_t tid)
{
	int rc;

	if((rc = pthread_detach(tid)) != 0)
		posix_error(rc, "Pthread_detach error");
}

void dns_error(char *msg)
{
	fprint(stderr, "%s:DNS ERROR %d\n", msg, h_error);
	exit(0);
}
struct hostent *GetHostbyname(const char *name)
{
	struct hostent *p;

	if((p = gethostbyname(name)) == NULL)
		dns_error("Gethostbyname error");

	return p;
}
