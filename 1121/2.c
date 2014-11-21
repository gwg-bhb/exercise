/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月22日 星期六 01时11分02秒
 ************************************************************************/

#include<stdio.h>

 void foor()
{
	puts("i > 5");
}

int main(void)
{
	int i = 10;
	
	if(i < 5)
		goto a;
	else
		goto b;

   a:  printf(" i < 5\n");
  // b:  puts("i > 5");
   b: foor();
	return 0;
}
