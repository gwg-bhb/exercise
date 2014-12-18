/*************************************************************************
    > File Name: 5.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月19日 星期五 00时21分25秒
 ************************************************************************/

#include <stdio.h>

typedef union
{
   float weight;
   int count;
}quantity;

int main(void)
{
	quantity m = {2};
	printf("%i\n", m.count);
	return 0;
}
