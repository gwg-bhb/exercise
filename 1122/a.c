/*************************************************************************
    > File Name: a.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月23日 星期日 00时38分08秒
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>


int main(void)
{
	char card_name[3];
    int count = 0;
	do
	{
		puts("输入牌名:");
		scanf("%2s", card_name);
		int val = 0;
		switch(card_name[0])
		{
			case 'J':
			case 'Q':
			case 'K':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'X':
			  //  return;
//			  break;
              continue;
			default:
				val = atoi(card_name);
				if(val > 10 || (val <= 1))
				{
					puts("input error");
					continue;
				}
		}
		if((val < 7) && (val > 2))
			count++;
		else if(10 == val)
			count--;
		printf("当前地计数:%d\n", count);
	}while('X' != card_name[0]);

	return 0;
}
