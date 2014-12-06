/*************************************************************************
    > File Name: 3.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月05日 星期五 18时27分43秒
 ************************************************************************/

#include <stdio.h>


int x[2] = {1, 2};
int y[2] = {3, 4};
int z[2];

int main(void)
{
	addvec(x, y, z, 2);
	printf("z = [%d %d]\n", z[0], z[1]);
	return 0;
}
