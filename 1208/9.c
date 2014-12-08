/*************************************************************************
    > File Name: 7.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月09日 星期二 00时20分28秒
 ************************************************************************/

#include <stdio.h>


int main(void)
{
	FILE *fp_in = fopen("1.txt", "r");
	FILE *fp_out = fopen("2.txt", "w");
    char ch[80];

	while(fscanf(fp_in, "%s", ch) == 1)
	{
		encrypt(ch);
		fprintf(fp_out, "%s", ch);
	}
	fclose(fp_out);
	fclose(fp_in);
	return 0;
}
