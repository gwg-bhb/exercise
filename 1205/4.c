/*************************************************************************
    > File Name: 4.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月05日 星期五 23时23分30秒
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	char tmp[80];
	FILE *fp_in = fopen("1.c", "r");
	if(NULL == fp_in)
	{
		fprintf(stderr, "open file fail");
		return 1;
	}
	FILE *fp_out = fopen("1.txt", "w");
	if(NULL == fp_out)
	{
		fprintf(stderr, "open file fail");
		return 1;
	}

	while(1 == fscanf(fp_in, "%s", tmp))
	{
		fprintf(fp_out, "%s\n", tmp);
	}
	fclose(fp_in);
	fclose(fp_out);
	return 0;
}
