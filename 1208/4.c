/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月08日 星期一 22时54分09秒
 ************************************************************************/

#include <stdio.h>
#include "head.h"
int main(void)
{
	float x = 1.0;
	float y = 2.0;
	printf("%f\n",add(x, y));

	return 0;
}

float add(float x, float y)
{
	return x + y;
}
