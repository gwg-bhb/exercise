/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年01月06日 星期二 23时28分48秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int compare_score(const void *a, const void *b)
{
	int x = *(int *)a;
	int y = *(int *)b;

	return -(x - y);
}

int main(void)
{
	int scores[] = {543, 323, 32, 554, 11, 3, 112};
	qsort(scores, 7, sizeof(int), compare_score);
    int i = 0;
	int start = 0;
	for(i = 0; i < 7; i++)
	{
		printf("%d", scores[i]);
		if(start == 0)
		{
			printf(",");
		}
		if( i == 5)
		{
			start = 1;
		}
	}
    printf("\n");
	return 0;
}
