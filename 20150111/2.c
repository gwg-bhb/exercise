/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年01月11日 星期日 12时47分25秒
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>

void printf_int(int args, ...)
{
	va_list ap;
	va_start(ap, args);

	int i;
	for( i = 0; i < args; i++)
	{
		printf("%d ", va_arg(ap, int));
	}
    printf("\n");
	va_end(ap);
}

int main(void)
{
	printf_int(3, 29, 11, 23);
	return 0;
}
