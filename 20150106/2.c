/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年01月06日 星期二 23时28分48秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_score(const void *a, const void *b)
{
	int x = *(int *)a;
	int y = *(int *)b;

	return (x - y);
}

int compare_score_des(const void *a, const void *b)
{
	int x = *(int *)a;
	int y = *(int *)b;

	return -(x - y);
}

typedef struct
{
	int width;
	int height;
} rectangle;

int compare_areas(const void *a, const void *b)
{
	rectangle x = *(rectangle *)a;
	rectangle y = *(rectangle *)b;

	return x.width*x.height - y.width*y.height;
}

int compare_names(const void *a, const void *b)
{
	char ** s1 = (char **)a;
	char ** s2 = (char **)b;

	return strcmp(*s1, *s2);
}

int compare_areas_desc(const void *a, const void *b)
{
	return -compare_areas( a, b);
}

int compare_names_desc(const void *a, const void *b)
{
	return -compare_names(a, b);
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
	char *name[] = {"Gwg", "Gy", "huqqiang", "haohai"};
	qsort(name, 4, sizeof(char *), compare_names);
	for(i = 0; i < 4; i++)
	{
		puts(name[i]);
	}
	puts("");
	return 0;
}
