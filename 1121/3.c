/*************************************************************************
    > File Name: 3.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月22日 星期六 01时18分48秒
 ************************************************************************/

#include<stdio.h>



int main()
{
	int i = 3;
	
	switch(i)
	{
		case 1:
			puts("i = 1");
			break;
		case 3:
			puts("i = 3");
			continue;
		case 4:
			puts("i = 4");
			break;
		case 5:
			puts("i = 5");
			break;
	}
	return 0;
}
