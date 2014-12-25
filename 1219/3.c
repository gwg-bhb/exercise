/*************************************************************************
    > File Name: 3.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月20日 星期六 02时56分14秒
 ************************************************************************/

#include <stdio.h>

typedef struct
{
   unsigned int name:1;
   unsigned int fingure:3;
   unsigned int age:2;
} bit;

int main(void)
{
    bit s;
	s.name = 1;
	s.fingure = 2;
	s.age = 3;
	printf("%x %x %x\n", s.name, s.fingure, s.age);
	return 0;
}
