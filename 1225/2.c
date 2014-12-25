/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月25日 星期四 11时15分31秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct island
{
    char *name;
    char *opens;
	char *closes;
	struct island *next;
} island;

void display(island *start)
{
	island *i = start;
    FILE *fp_open = fopen("out.txt", "w");
	for(;i != NULL; i = i->next)
	{
		fprintf(fp_open,"island:%sopen:%s - %s\n", i->name, i->opens, i->closes);
		fprintf(stdout,"island:%stopen:%s\tclose:%s\n", i->name, i->opens, i->closes);
	}
}

island *creat(char *name)
{
	char *f_name = strdup(name);
	island *i = (island *)malloc(sizeof(island));
	i->name = f_name;
	i->opens = "09:00";
	i->closes = "17:00";
	i->next = NULL;
	return i;
}

int main(void)
{
	char name[80];
	name[0] = '\0';
	island *start = NULL;
	island *i = start;
	island *p = NULL;
	printf("%s======\n",name);
	while(NULL != fgets(name, 80, stdin))
	{
	//	scanf("%s", &name1);
	//	fgets(name1, 80, stdin);
  //      printf("----------------\n");
		p = creat(name);
	    if(start == NULL)
			start = p;
        else
			i->next = p;
		i = p;
	
//		printf("-----------\n");
	}
	display(start);
	i = start->next;
	while(start != NULL)
	{
		free(start->name);
		free(start);
		start = i;
		if(start != NULL)
		i = i->next;
	}
	return 0;
}
