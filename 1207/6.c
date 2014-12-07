/*************************************************************************
    > File Name: 6.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月07日 星期日 23时38分38秒
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int  x = 7;
    int  y = 2;
	float z;
	z = x/y;
	printf("z = %f\n", z);
	z = (float)x/y;
	printf("z = %f\n", z);
	z = ((float)x)/y;
	printf("z = %f\n", z);
	return 0;
}
