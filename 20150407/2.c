/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年04月07日 星期二 09时41分02秒
 ************************************************************************/

#include <stdio.h>


int main()
{
	int x;
	int sum = 0;
	for( x = 1; x <= 1e9; x++)
		sum += (x*200)/256;
	return 0;
}