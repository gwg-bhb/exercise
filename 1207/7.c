/*************************************************************************
    > File Name: 7.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月08日 星期一 01时28分15秒
 ************************************************************************/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[])
{
	printf("The value of INT_MAX is %d\n", INT_MAX);
	printf("The value of INT_MIN is %i\n", INT_MIN);
	printf("An int takes %ld byte\n", sizeof(int));

	printf("The value of FLT_MAX is %f\n", FLT_MAX);
	printf("The value of FLT_MIN is %f\n", FLT_MIN);
	printf("An float takes %ld byte\n", sizeof(float));
	return 0;
}
