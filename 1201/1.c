/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月02日 星期二 00时04分42秒
 ************************************************************************/
//   stdin stdout stderr
#include <stdio.h>
#include <string.h>


int main(void)
{
	fprintf(stderr, "stderr hello\n");
	fprintf(stdout, "stdout hello\n");
	return 0;
}
