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
	printf("msg is where:%p\n", msg);
}


int main(void)
{
	char quote[] = "I love you";
	printf("quote is where:%p\n", quote);
	fortune(quote);

	return 0;
}
