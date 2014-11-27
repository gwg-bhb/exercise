/*************************************************************************
    > File Name: 4.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月28日 星期五 00时44分47秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>


int main(void)
{
	char s0[] = "what is your name?";
	char s1[] = "is";
	char s2[80] = {};
    if(0 == strcmp(s1, "is"))
		printf("s1 == is");
	if(NULL != strstr(s0, s1))
		puts(s0);
	strcat(s0, s1);
	puts(s0);
	puts(s2);
    strcpy(s2, s0);
    puts(s2);
	printf("%ld\n", strlen(s2));
	return 0;
}
