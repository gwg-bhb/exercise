/*************************************************************************
    > File Name: a.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月03日 星期一 01时54分26秒
 ************************************************************************/
// %n 格式说明符可以将当前打印的字符数目写入到相应的变量中去,用&取地址符号
#include<stdio.h>


int main(void)
{
	int n;
	printf("hello world\n%n",&n);
	printf("%d\n",n);
	return 0;
}
