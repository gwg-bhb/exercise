/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月27日 星期六 02时25分49秒
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	FILE *f_in = fopen("12306.txt", "r");
	FILE *f_out = fopen("j.txt", "w");

	int count = 0;
	char buf[200];
	int i = 0;
	while(NULL != fgets(buf, 200, f_in))
	{
		count++;
		for(i = 0; i < strlen(buf); i++)
		{
			buf[i] = buf[i]^'a';
		}
		fprintf(f_out, "%s", buf);
		fflush(f_out);
        printf("%d\n", count);
	}
	printf("count = %d\n", count);
	fclose(f_in);
	fclose(f_out);
}
