/*************************************************************************
    > File Name: c.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月18日 星期二 01时26分47秒
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	char card_name[3];
	puts("请输入牌名:");
	scanf("%s",card_name);
    int val = 0;
	if('Q' == card_name[0])
       val = 12;
	else if('J' == card_name[0])
		val = 11;
	else if('K' == card_name[0])
		val = 13;
	else
		val = atoi(card_name);

	if(val <= 6 &&(val >= 3))
		puts("计数增加");
	else if(val >= 10 && val <= 13)
		puts("计数减少");
	
	return 0;
}
