/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月12日 星期五 23时53分41秒
 ************************************************************************/

#include <stdio.h>

#define JUST_CHECKING
#define LIMIT 4

int main(void)
{
	int i;
	int total = 0;
    
	for(i = 0; i <= LIMIT; i++)
	{
		total += 2*i*i + 1;
#ifdef JUST_CHECKING
		printf("i=%d, runing total = %d\n", i, total);
#endif
	}
	printf("Grand total = %d\n", total);
	return  0;
}
