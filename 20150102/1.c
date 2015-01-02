/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年01月03日 星期六 00时57分41秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int NUM_ADS = 4;
char *ADS[] = {
	"Willliam:SBM GSON likes sports, TV, dining",
	"Matt:SWM NS likes art, movies, threater",
	"Luies:DWN DS likes trucks, sports and biber",
	"Jed:DBM likes threat, sports"
};

void find()
{
	int i = 0;
	for(; i < NUM_ADS; i++)
	{
		if((strstr(ADS[i], "sports")) && !strstr(ADS[i], "biber"))
			printf("%s\n",ADS[i]);
	}
}


int main(void)
{
	find();
	return 0;
}
