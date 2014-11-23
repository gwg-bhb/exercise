/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月24日 星期一 01时06分30秒
 ************************************************************************/

#include<stdio.h>


void go_south_east(int *p, int *q)  // p经度增加,q纬度减少
{
    (*p)++;
	(*q)--;
}

void go_north_west(int *p, int *q)  //p经度减少,q纬度增加
{
	(*p)--;
	(*q)++;
}

void go_south(int *q)  //q纬度增加
{
   (*q)++;
}

int main(void)
{
	int x = 32;
	int y = -40;

	printf("[%d, %d]\n", x, y);
	go_south_east(&x, &y);
	printf("[%d, %d]\n", x, y);
	go_north_west(&x, &y);
	printf("[%d, %d]\n", x, y);
	go_south(&x);
	printf("[%d. %d]\n", x, y);

	return 0;
}
