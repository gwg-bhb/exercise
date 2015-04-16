/*************************************************************************
    > File Name: sort_main.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年04月16日 星期四 23时59分10秒
 *****************************************************:`******************/

#include <stdio.h>
#include <stdlib.h>

void sortnum(int *, int);
int main()
{
	int num = 0;
	printf("要排序的个数：");
	scanf("%d", &num);
    int * arry;
	if(NULL == (arry = (int *)malloc(num * sizeof(int))))
	{
		printf("malloc error\n");
		return 1;
	}
    int i = 0;
	while(i < num)
	{
		printf("%d:", i+1);
		scanf("%d", arry+i);
		i++;
	}
    i = 0;
	sortnum(arry, num);
	while(i < num)
	{
		printf("%d ", arry[i]);
		i++;
	
	}
	printf("\n");
	return 0;
}

