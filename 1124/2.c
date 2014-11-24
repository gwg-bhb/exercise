/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月24日 星期一 11时42分25秒
 ************************************************************************/

#include<stdio.h>

void fortune(char msg[])
{
	printf("Message reads:%s\n", msg);
	puts(msg);
	printf("Message length:%ld\n", sizeof(msg));
}


int main(void)
{
	char quote[] = "I love you";

	printf("Message length:%ld\n", sizeof(quote));

	fortune(quote);

	return 0;
}
