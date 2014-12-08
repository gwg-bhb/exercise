/*************************************************************************
    > File Name: 7.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月09日 星期二 00时20分28秒
 ************************************************************************/

#include <stdio.h>


int main(void)
{
	FILE *fp_in = fopen("2.txt", "r");
	FILE *fp_out = fopen("3.txt", "w");
    char ch;

	while(fscanf(fp_in, "%c", &ch) == 1)
	{
		ch = ch ^ 31;
		fprintf(fp_out, "%c", ch);
	}
	fclose(fp_out);
	fclose(fp_in);
	return 0;
}
