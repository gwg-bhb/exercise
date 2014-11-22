/*************************************************************************
    > File Name: 3.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年11月23日 星期日 00时29分14秒
 ************************************************************************/

#include<stdio.h>



int main(void)
{
	int x = 0;
	int y = 0;
	while(x < 5)
	{
//		y = x - y;
//        y = y + x;
//        y += 2;
//		if(y > 4)
//			y -= 1;
//        x += 1;
//		y += x;
        
		if(y < 5)
		{
			x += 1;
			if(y < 3)
				x--;
		}
		y += 2;
		printf("%i%i ", x, y);
		x = x + 1;
	}
	puts("");
	return 0;
}
