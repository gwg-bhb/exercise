 *************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月25日 星期二 23时46分36秒
 ************************************************************************/

#include<stdio.h>



int main(void)
{
	char s[] = "123";
	char s1[1];
	s1[0] = s[2];
	int i = atoi(s1);
	printf("%d\n", i);
	return 0;
}
