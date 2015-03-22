/*************************************************************************
    > File Name: 4.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月22日 星期日 08时15分07秒
 ************************************************************************/

#include <stdio.h>


struct Lnode
{
	int t;
    struct	Lnode *p;
};


int main()
{
	struct Lnode t1;
	t1.t = 10;
	printf("t=%d\n", t1.t);
	return 0;
}
