/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月07日 星期日 10时26分13秒
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int i = 0;
	FILE *fp = fopen("1.txt", "a");
    while(1)
	{
      fprintf(fp, "%d\n", i++);
	  fflush(fp);
	  sleep(1);
	}
	fclose(fp);
	return 0;
}
