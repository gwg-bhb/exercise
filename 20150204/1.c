/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年02月04日 星期三 15时05分23秒
 ************************************************************************/

#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

int main(void)
{

    char s[] = "Hello,everybody my friend";
	encrypt(s);
	printf("Encrypt to:%s\n", s);
	printf("Checksum is %d\n", checksum(s));
	encrypt(s);
	printf("Encrypt to:%s\n", s);
	printf("checksum is %d\n", checksum(s));
	return 0;
}
