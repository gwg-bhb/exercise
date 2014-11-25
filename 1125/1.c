/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月25日 星期二 23时21分54秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>


void change(char s[], int len, int sum[])
{
	int i = 0;
	puts(s);
	for(i = 0; i < len;)
	{
		char s1[2], s2[2];
		s1[0] = s[i];
		s1[1] = '\0';
		s2[0] = s[i + 1];
		s2[1] = '\0';
		printf("%c\n", s[i]);
		printf("%s  %s\n", s1, s2);
		sum[i/2] = atoi(s1) * 16 + atoi(s2);
		i += 2;
	}
}
int main(void)
{
    char s[] = "356423";
	int sum[3];

	int len = sizeof(s) - 1;
	change(s, len, sum);
/*	for(int i = 0; i < len;)
	{
//		printf("%d\n", sizeof(s));
	    sum[i/2] = atoi(s[i+1]) * 16 + atoi(s[i]);
		i += 2;
	}
	*/
	for(int i = 0; i < 3; i++)
      printf("sum[%d] = %d\n", i, sum[i]);
	return 0;
}
