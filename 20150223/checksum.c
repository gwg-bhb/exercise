/*************************************************************************
    > File Name: checksum.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年02月23日 星期一 18时05分45秒
 ************************************************************************/

#include "checksum.h"

int checksum(char *message)
{
	int c = 0;
	while(*message)
	{
		c += c ^ (int) (*message);
		message++;
	}
	return c;
}
