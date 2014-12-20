/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月20日 星期六 15时56分26秒
 ************************************************************************/

#include <stdio.h>
#include <signal.h>
#include <errno.h> 
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void handle(int srg)
{
	pid_t pid;

	while((pid = waitpid(-1, NULL, 0)) > 0)
//    if((pid = waitpid(-1, NULL, 0)) > 0)
		printf("child is reaped: %d\n", (int)pid);
	if(errno != ECHILD)
	{
		fprintf(stderr, "waitpid error\n");
	}
	sleep(2);
	return;
}
int main(void)
{
	int n;
	char buf[100];
	if(signal(SIGCHLD, handle) == SIG_ERR)
	{
        fprintf(stderr, "signal error\n");
		exit(1);
	}
	int i;
	for(i = 0; i < 3; i++)
	{
		if(fork() == 0)
		{
			printf("Hello, I am %d\n", (int)getpid());
			sleep(1);
			exit(0);
		}
	}
	while((n = read(STDIN_FILENO, buf, sizeof(buf))) < 0)
	{
		if(errno != EINTR)
		{
			fprintf(stderr, "read error\n");
			exit(0);
		}
	}

	printf("Parent processing input\n");
	while(1);
	return 0;
}
