/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年02月23日 星期一 17时55分45秒
 ************************************************************************/

#include "encrypt.h"
#include "checksum.h"

int main(void)
{ 
	char s[] = "Speak friend and enter";
	encrypt(s);
	printf("s:%s\n", s);
	printf("s:%d\n", checksum(s));
	encrypt(s);
	printf("===================\n");
	printf("s:%s\n", s);
	printf("s:%d\n", checksum(s));
	return 0;
}
