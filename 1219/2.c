/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月20日 星期六 01时04分00秒
 ************************************************************************/

#include <stdio.h>


typedef enum ex1
{ 
	RED, GREEN, BLUE
} ex_enum;

typedef union ex2
{
	int i;
	double k;
	float s;
	char a;
} ex_union;

typedef struct ex3
{
    int i;
	const char * name;
	ex_union a;
	ex_enum e; 
} ex_struct;

typedef struct ex4
{
	unsigned int first;
	unsigned int come_again;
	unsigned int finger_lost;
	unsigned int day_of_week;
} ex_bit;

int main(void)
{
	ex_bit f;
	printf("%d\n", (int)sizeof(ex_bit));
	printf("%d\n", (int)sizeof(f));
	return 0;
}
