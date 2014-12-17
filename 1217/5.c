/*************************************************************************
    > File Name: 5.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月18日 星期四 00时10分44秒
 ************************************************************************/

#include <stdio.h>

typedef struct
{
   float tank_capacity;
   int tank_psi;
   const char *suit_material;
} equipment;

typedef struct scbua
{
   const char * name;
   equipment kit;
}diver;

void badge(diver d)
{
	printf("Name:%s Tank: %2.2f(%i) Suit: %s\n",
			d.name, d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material);
}

int main(void)
{
	diver d = {"Randy", {5.5, 3500, "Neoprene"}};
	badge(d);
	return 0;
}
