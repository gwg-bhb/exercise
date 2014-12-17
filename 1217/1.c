/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月17日 星期三 12时29分10秒
 ************************************************************************/

#include <stdio.h>


struct fish
{
	const char *name;
	const char *species;
	int teeth;
	int age;
};

int main(void)
{
	struct fish fish1 = {"Snappy", "Piranha", 69, 4};
	return 0;
}
