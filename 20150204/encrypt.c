/*************************************************************************
    > File Name: encrypt.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年02月04日 星期三 15时24分28秒
 ************************************************************************/

#include "encrypt.h"

void encrypt(char *message)
{
	while(*message)
	{
		*message = (*message) ^ 31;
		message++;
	}
}
