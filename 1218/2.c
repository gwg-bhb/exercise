/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月19日 星期五 00时00分28秒
 ************************************************************************/

#include <stdio.h>

typedef union
{
   float lemon;
   int line_pieces;
} lemon_lime;

typedef struct
{
    float tequila;
	float cointreau;
	lemon_lime citrus;
} margrita;

int main(void)
{
	margrita m = {2.0, 1.0, .citrus.lemon=2};
    printf("%2.1f measure of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n",
			m.tequila, m.cointreau, m.citrus.lemon);	
	return 0;
}
