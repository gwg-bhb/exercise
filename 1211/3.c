/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月11日 星期四 22时28分16秒
 ************************************************************************/

#include "head.h"

#define N 4

int main(void)
{
	int status, i;
	pid_t pid;

	for(i = 0; i < N; i++)
		if((pid = Fork()) == 0)
			exit(100+i);

	while((pid = waitpid(-1, &status, WNOHANG)) > 0)
	{
		if(WIFEXITED(status))
			printf("child %d terminated normally with exit status=%d\n", pid, WEXITSTATUS(status));
		else
			printf("child %d terminated abnormally\n", pid);
	}
	if(errno != ECHILD)
		unix_error("waitpid error");
	return 0;
}