/*************************************************************************
    > File Name: b.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月12日 星期三 23时03分17秒
 ************************************************************************/


#include <stdio.h>
int foorbar(int, int);

int main(void)
{
	int a, b, sum;
	scanf("%d%d",&a,&b);
	sum = foorbar(a, b);
	printf("sum = %d\n", sum);
	return 0;
}
