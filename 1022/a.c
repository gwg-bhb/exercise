/*************************************************************************
    > File Name: a.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年10月22日 星期三 15时28分05秒

	深入理解计算机系统练习题2
 ************************************************************************/

#include<stdio.h>

typedef unsigned char * byte_pointer;

void show_bytes(byte_pointer star, int len)
{
     int i = 0;
	 for(i = 0; i < len; i++)
	 {
		 printf("%.2x",star[i]);
	 }
	 printf("\n");
}
int main(void)
{
	short sx = -12345;
	unsigned short x = sx;
	unsigned tmp = x;
	printf("tmp=%u:\t",tmp);
	show_bytes((byte_pointer)&tmp,sizeof(unsigned));
	unsigned uy = sx;
	printf("uy=%u:\t",uy);
	show_bytes((byte_pointer)&uy,sizeof(unsigned));
	return 0;
}
