/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月23日 星期日 00时12分31秒
 ************************************************************************/

#include<stdio.h>



int larger(int a, int b)
{
	if(a > b)
		return a;
	return b;
}



int main(void)
{
	int larg = larger(6, 5);
	printf("最大的数值是:%d\n", larg);

	return 0;
}
