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
	char s1[80] = "The";
	//scanf("")
	for(int i = 0; i < 5; i++)
      puts(tracks[i]);
    fgets(s1, sizeof(s1), stdin);
    //scanf("%s", s1);
	s1[strlen(s1)-1] = '\0';
//	s1[3] = '\0';
    puts(s1);
	char *s;
	for(int i = 0; i < 5; i++)
	{
		printf("%d---------------\n", i);
	//	puts("i-------------------");
		s = strstr(tracks[i], s1);
		if(NULL != s)
			 puts(tracks[i]);
	}

	//printf("%c\n", tracks[3][3]);
//	puts(tracks[3][3]);
	return 0;
}
