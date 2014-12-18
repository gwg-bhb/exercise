/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月18日 星期四 23时04分54秒
 ************************************************************************/

#include <stdio.h>

typedef union
{
	double i;
    short count;
	float weight;
	float volume;
}quantity;

typedef struct
{
    const char *name;
	const char *country;
	quantity amount;
}fruit_order;

int main(void)
{
	fruit_order apples = {"apples", "England", .amount.count=5};
	printf("Name:%s\tCountry:%s\t%i\n", apples.name, apples.country, apples.amount.count);
	printf("sizeof(quantity)=%lu\n",sizeof(quantity));
	return 0;
}
