/*************************************************************************
    > File Name: c.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年10月22日 星期三 18时43分37秒
 ************************************************************************/
// 深入理解计算机系统 2.26
#include <stdio.h>
#include <string.h>

int strlonger(char *s, char *t)
{
//	return ((int)strlen(s) - (int)strlen(t)) > 0;

	return (strlen(s) > strlen(t));

}


int main(void)
{
    char * s = "hello";
	char * t = "helloworld";
	if(strlonger(s,t) == 1)
	{
		printf("s is longer than t\n");
	}
	else
		printf("t is longer\n");
	return 0;
}
