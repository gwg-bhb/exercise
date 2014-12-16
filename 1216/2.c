/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月17日 星期三 00时51分13秒
 ************************************************************************/

#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
void myhandler(int sig)
{
	static int beeps = 0;
	printf("BEEP\n");

	if(++beeps < 5)
		alarm(1);
	else
	{
		printf("BOOM\n");
		exit(0);
	}
}
int main(void)
{
	signal(SIGALRM, myhandler);
	alarm(1);
	while(1);
	return 0;
}
