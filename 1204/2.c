/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月04日 星期四 23时31分58秒
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	float latitude;
	float longitude;
	char info[80];
	while(3 == scanf("%f,%f,%79[^80]", &latitude, &longitude, info))
	{
		if((latitude > 26) && (latitude < 34))
			if((longitude > -76) && (longitude < -64))
				fprintf(stdout, "%f,%f,%s\n", latitude, longitude, info);
	}
	return 0;
}
