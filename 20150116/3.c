/*************************************************************************
    > File Name: 3.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年01月17日 星期六 17时27分05秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[3] = {0};

	srand((unsigned)time(0));

	if(2 != argc)
	{
		printf("Error\n");
		return 1;
	}
	int i = 0;
	int k;
	int j = atoi(argv[1]);
	for(i = 0; i < j; i++)
	{
		k = rand()%3;
		if(k == 0)
			a[0]++;
		else if(k == 1)
			a[1]++;
		else
			a[2]++;
	}

	for(i = 0; i < 3; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
