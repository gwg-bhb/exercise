/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月27日 星期四 00时05分12秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char tracks[][80] = {
       "I left my heart in Harvard Med School",
	   "Newark - a wondful town",
	   "Dancing with a dock",
	   "From here to maternity",
	   "The girl from Iwo Jina"
	};
	for(int i = 0; i < 5; i++)
      puts(tracks[i]);

	char *s = strstr(tracks[1], "wondful");
    puts(s);
//	printf("%c\n", tracks[3][3]);
//	puts(tracks[3][3]);
	return 0;
}
