/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月18日 星期三 01时34分34秒
 ************************************************************************/

#include <stdio.h>
#include <sys/timeb.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    struct	timeb t1, t2;
	int i, sum = 0;
	long  t;
	if(argc != 2)
	{
		printf("ERROR\n");
		return 0;
	}
	
	int x = 0;
	int n = 10;
	n = atoi(argv[argc - 1]);
	printf("n = %d\n", n);
	ftime(&t1);
	for(i = 0; i < n; i++)
	{
	/*	int j = 0;
		for(; j < n; j++)
		{
			x++;
			sum += x;
		}
		*/
		sum += i;
	}
	ftime(&t2);
	t = (t2.time - t1.time) * 1000 + (t2.millitm - t1.millitm);
	printf("t = %ld\n", t);
	return 1;
}
