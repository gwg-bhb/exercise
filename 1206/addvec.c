/*************************************************************************
    > File Name: 3.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月05日 星期五 17时44分16秒
 ************************************************************************/

void addvec(int *x, int *y, int *z, int n)
{
	int i = 0;
	for(i = 0; i < n; i++)
		z[i] = x[i] + y[i];
}
