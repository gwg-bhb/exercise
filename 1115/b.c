/*************************************************************************
    > File Name: b.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月16日 星期日 00时31分08秒
 ************************************************************************/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    char card_name[3];
    puts("输入牌名:");
	scanf("%s", card_name);
	int val = 0;
	if('J' == card_name[0])
		val = 10;
	else if('Q' == card_name[0])
		val = 10;
	else if('K' == card_name[0])
		val = 11;
	else if('A' == card_name[0])
		val = 11;
	else
		val = atoi(card_name);
	printf("this card is %d", val);
	puts("");
	return 0;
}
