/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年01月16日 星期五 11时49分23秒
 ************************************************************************/

#include <stdio.h>


int main(void)
{
	int a[] = {0, 1, 1, 3, 4, 5};
	printf("len = %lu\n", sizeof(a)/4);

	int i, j;
	for(i = 0; i < sizeof(a)/4-2; i++)
	{
      for(j = i+1; j < sizeof(a)/4-1; j++)
		  if(a[i] == a[j])
			{
				printf("有重复\n");
				return 1;
			}
	}
	printf("没有重复\n");
	return 0;
}
