/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月30日 星期日 01时03分38秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
	float latitude;
	float longitude;
	char info[80];
	int start = 0;
	puts("data = [");

	while(3 == scanf("%f,%f,%79[^\n]", &latitude, &longitude, info))
	{
		if(start)
			puts(",");
		else
			start = 1;
		printf("{latitude: %f, longitude: %f, info: %s}", latitude, longitude, info);
//		puts(",");
	}
	puts("\n]");
	return 0;
}
