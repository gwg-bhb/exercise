/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月22日 星期六 00时40分41秒
 ************************************************************************/

#include<stdio.h>


void for_test()
{
	for(int counter = 0; counter < 11; counter++)
		printf("%i个枣子\n", counter);
}

void while_test()
{
	int counter = 0;
	while(counter < 11)
	{
		printf("%i个枣子\n", counter);
		counter++;
	}
}

void do_while_test()
{
	int counter = 0;
	do
	{
		printf("%i个枣子\n", counter);
		counter++;
	}while(counter < 11);
}
int main(void)
{
	for_test();
	puts("--------------for-end-------------------");
	while_test();
	puts("--------------while-end-----------------");
	do_while_test();
	puts("--------------do-while-end--------------");
	return 0;
}
