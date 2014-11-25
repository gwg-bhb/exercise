/*************************************************************************
    > File Name: 4.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月26日 星期三 00时21分37秒
 ************************************************************************/

#include<stdio.h>


int main(void)
{
	char first_name[20];
	char last_name[20];
	printf("Enter first and last name:");
	scanf("%19s%19s", first_name, last_name);
	printf("first_name: %s\nlast name:%s\n", first_name, last_name);
	return 0;
}
