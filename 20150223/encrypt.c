/*************************************************************************
    > File Name: encrypt.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年02月23日 星期一 18时04分15秒
 ************************************************************************/

#include "encrypt.h"

void encrypt(char *message)
{
	while(*message)
	{
		*message = *message ^ 31;
		message++;
	}
}
