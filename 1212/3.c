/*************************************************************************
    > File Name: 3.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月12日 星期五 23时57分16秒
 ************************************************************************/

#include <stdio.h>
#define JUST_CHECKING
#define  LIMIT 4
#undef JUST_CHECKING
int main(void)
{
	int i = 0;
	for(i; i <= LIMIT; )
	{ 
		i++;
#ifdef JUST_CHECKING
     printf("i = %d\n", i);
#endif
	}
	printf("LIMTI = %d, i = %d\n", LIMIT, i);
	return 0;
}
