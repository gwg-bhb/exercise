/*************************************************************************
    > File Name: 3.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月07日 星期日 20时01分13秒
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char ch;
	while((ch = getopt(argc, argv, "abc:")) != EOF)
	{
		switch(ch)
		{
			case 'a':
				puts("a");
				break;
			case 'b':
				puts("b");
				break;
			case 'c':
				puts("c");
				break;
			default:
				puts("NO options")
;		}
	}
	return 0;
}
