/*************************************************************************
    > File Name: 5.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月24日 星期一 12时27分23秒
 ************************************************************************/

#include<stdio.h>


int main(void)
{
	int contestants[] = {1, 2, 3};
	int *choice = contestants;
	contestants[0] = 2;
	contestants[1] = contestants[2];
	contestants[2] = *choice;
	printf("%d 号男嘉宾\n", contestants[2]);
	return 0;
}
