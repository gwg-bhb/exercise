/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月19日 星期五 23时23分27秒
 ************************************************************************/

#include <stdio.h>

typedef enum
{
   COUNT, WEIGHT, VOLUME
} unit_of_measure;

typedef union
{
   short count;
   float weight;
   float volume;
} quantity;

typedef struct
{
   const char *name;
   quantity amount;
   unit_of_measure units;
} fruit_order;

void display(fruit_order f)
{
	printf("This order contains:");

	if(f.units == COUNT)
		printf("%i of %s\n", f.amount.count, f.name);
	else if(f.units == WEIGHT)
		printf("%2.2f of %s\n", f.amount.weight, f.name);
	else
		printf("%2.2f of %s\n", f.amount.volume, f.name);
}

int main(void)
{
	fruit_order orange = {"orange", .amount.volume=233.3, VOLUME};
	display(orange);
	fruit_order apples = {"apples", .amount.count=10, COUNT};
	fruit_order strawberries = {"strawberries", .amount.weight=3.3, WEIGHT};
	display(apples);
	display(strawberries);
	return 0;
}
