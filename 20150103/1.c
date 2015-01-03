/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年01月03日 星期六 22时54分41秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int NUM_ADS = 7;
char *ADS[] ={
"William:SBM GSON likes sports, TV, dining",
"Matt:SWM NS likes art, movies, theater",
"Luis:SLM ND likes books, theater, art",
"Mike:DWM DS likes trucks, sports and bieber",
"Peter:SAM likes chess, working out and art",
"Josh:SJM likes sports, movies and theater",
"Jed:DBM likes theater, books and dining"
};
int sports_no_bieber(char *s)
{
	return strstr(s, "sports") && !strstr(s, "biber");
}

int sports_or_workout(char *s)
{
	return strstr(s, "sports") || strstr(s, "workout");
}

int ns_theater(char *s)
{
	return strstr(s, "NS") && strstr(s, "theater");
}

int arts_theater_or_dining(char *s)
{
	return strstr(s, "arts") && (strstr(s, "theater") || strstr(s, "dining"));
}

void find(int (*match) (char *))
{
	int i;
	puts("----------------------");
	for(i = 0; i < NUM_ADS; i++)
	{
		if(match(ADS[i]))
			printf("%s\n", ADS[i]);
	}
	puts("-----------------------");
}

int main(void)
{
	find(sports_no_bieber);
	find(sports_or_workout);
	find(ns_theater);
	find(arts_theater_or_dining);
	find(arts_theater_or_dining);
	return 0;
}
