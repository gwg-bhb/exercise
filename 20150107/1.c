/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年01月08日 星期四 00时29分02秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

enum response_type {DUMP, SECOND_CHANCE, MARRIAGE};
typedef struct
{
	char *name;
    enum response_type type;
} response;


void dump(response r)
{
   printf("Dear %s:\n", r.name);
   puts("Unfortunately your last data contacted us to");
   puts("say taht they will not be seeing you again");
}

void second_chance(response r)
{
   printf("Dear %s:\n", r.name);
   puts("Good news: your last data has asked us to");
   puts("arrange another meeting. Please call ASAP");
}

void marriage(response r) 
{
	printf("Dear %s:\n", r.name);
	puts("Congratulations! Your last data has contacted");
	puts("us with a propsal of marriage");
}
int main(void)
{
	response r[] = {{"Mike", DUMP}, {
		"Luis", SECOND_CHANCE
	}, {
		"Matt", SECOND_CHANCE
	}, {
		"William", MARRIAGE
	}};

	int i = 0;
	for(i = 0; i < 4; i++)
	{
		switch(r[i].type)
		{
			case DUMP:
				dump(r[i]);
				break;
			case SECOND_CHANCE:
				second_chance(r[i]);
				break;
			default:
				marriage(r[i]);
		}
	}
	return 0;
}
