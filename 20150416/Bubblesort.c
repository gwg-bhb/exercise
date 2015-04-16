/*************************************************************************
    > File Name: Bubblesort.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年04月16日 星期四 08时51分17秒
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int tmp[10];
	int swaptmp;
	printf("Input 10 Number:");
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", tmp+i);
	}
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", tmp[i]);
	}
	printf("\n");

	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j< 9-i; j++)
		{
			if(tmp[j] > tmp[j+1])
			{
				swaptmp = tmp[j];
				tmp[j] = tmp[j+1];
				tmp[j+1] = swaptmp;
			}
		}
	}

	for(int i = 0; i < 10; i++)
	{
		printf("%d ", tmp[i]);
	}
	printf("\n");
	return 0;
}
