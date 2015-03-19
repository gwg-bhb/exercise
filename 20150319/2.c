/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月19日 星期四 12时04分41秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char *now()
{
   time_t t;
   time(&t);
   return asctime(localtime(&t));
}

int main()
{

	char comment[80];
	char cmd[120];
	fgets(comment, 80, stdin);
	sprintf(cmd, "echo '%s %s' >> log.log", comment, now());
	system(cmd);
	system("dir /");
	system("say 'End of line'");
	return 0;
}
