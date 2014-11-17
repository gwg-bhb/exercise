/*************************************************************************
    > File Name: b.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月18日 星期二 01时11分28秒
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>

int main(void)
{
	int count = 0;
	char card_name[3] = {0};
	while(scanf("%s", card_name))
	{
		if(card_name[0] == 'J' 
				|| 'Q' == card_name[0] 
				|| 'K' == card_name[0])
		{
			count --;
		}
		if(3 <= atoi(card_name) && 6>= atoi(card_name))
		{
			count ++;
		}
//		else
//			goto;
		
		if(count >= 10)
		   printf("count = %d,下注\n", count);
		else
			printf("count = %d,观望\n", count);
		
	}
	return 0;
}
