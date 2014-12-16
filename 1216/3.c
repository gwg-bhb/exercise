/*************************************************************************
    > File Name: 3.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月17日 星期三 01时22分08秒
 ************************************************************************/

#include <stdio.h>

int fun(void)
{
	    static int count = 10;    // 事实上此赋值语句从来没有执行过
	    return count--;
}

int count = 1;

int main(void)
{
	    
	    printf("global\t\tlocal static\n");
	    for(; count <= 10; ++count)
	        printf("%d\t\t%d\n", count, fun());    
			    
			    return 0;
}
