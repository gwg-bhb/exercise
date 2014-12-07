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
	puts("");
	printf("The value of CHAR_MAX is %d\n", CHAR_MAX);
	printf("The value of CHAR_MIN is %d\n", CHAR_MIN);
	printf("An char takes %ld byte\n", sizeof(char));
	puts("");
	printf("The value of DBL_MAX is %lf\n", DBL_MAX);
	printf("The value of DBL_MIN is %lf\n", DBL_MIN);
	printf("An double takes %ld byte\n", sizeof(double));
	puts("");
	//printf("The value of LNG_MAX is %ld\n", LNG_MAX);
   //	printf("The value of LNG_MIN is %ld\n", LNG_MIN);
	printf("An long takes %ld byte\n", sizeof(long));
	return 0;
}
