/*************************************************************************
    > File Name: b.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年10月22日 星期三 16时36分12秒
 ************************************************************************/
//    深入理解计算机系统  P52


#include<stdio.h>

float sum_elements(float a[], unsigned len)
{
	int i;
	float sum = 0;
    for(i = 0; i <= len-1; i++)
	{
		sum += a[i];
	}
	return sum;
}

int main(void)
{

	float a[2] = {
		1.0, 2.0
	};

	float s = sum_elements(a, 0);
	printf("sum=%lf\n",s);
	return 0;
}
