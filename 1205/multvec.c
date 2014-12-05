/*************************************************************************
    > File Name: multvec.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月05日 星期五 18时24分50秒
 ************************************************************************/

void multvec(int *x, int *y, int *z, int n)
{
	int i;
	for(i = 0; i < n; i++)
		z[i] = x[i] * y[i];
}
