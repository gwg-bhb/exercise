/*************************************************************************
    > File Name: b.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年10月24日 星期五 01时00分53秒
 ************************************************************************/
//  程序设计  1.1
#include<stdio.h>
#include <math.h>

int main(void)
{

	double r, h;
    const double pi = 4.0 * atan(1.0);
	scanf("%lf %lf",&r,&h);
    printf("AREA=%.3lf\n",pi*r*r*2+2*r*pi*h);
	return 0;
}
