/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月27日 星期四 23时46分40秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

char tracks[][80] = {
	"I will go on",
	"Dancing with dock",
	"It is work",
	"The girl from Jina"
};

void find_track(char search[])
{
	int i = 0;
	for(i = 0; i < 4; i++)
	{
		if(strstr(tracks[i], search))
			puts(tracks[i]);
	}
}
int main(void)
{
	char search[80];
    for(int i = 0; i < 4; i++)
		puts(tracks[i]);
	printf("Please search for:");
	fgets(search, 80, stdin);
	search[strlen(search)-1] = '\0';
	find_track(search);
	return 0;
}
