/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年01月16日 星期五 12时00分02秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int min(int m, int n)
{
	if(m > n)
		return n;
	else
		return m;
}

int main(int argc, char *argv[])
{

	if(argc != 3)
	{
		printf("参数少\n");
		return -1;
	}
     printf("argc = %d\n", argc)  ;  
	int m = atoi(argv[1]);
	int n = atoi(argv[2]);
    int t = min(m, n);
    
	printf("t = %d\n", t);
	while((t > 0) && ((m%t != 0) || (n%t != 0)))
		t--;

		if(t != 0)
		printf("%d 和 %d 的最大公约数是:%d\n", m, n, t);
		else
		printf("没有最大公约数\n");
	return 0;
}
