/*************************************************************************
    > File Name: 4.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月10日 星期三 01时03分32秒
 ************************************************************************/

#include <stdio.h>
#include "head.h"

int main(void)
{
	Fork();
	Fork();
if(Fork() == 0)
	printf("hello world\n");
	return 0;
}
