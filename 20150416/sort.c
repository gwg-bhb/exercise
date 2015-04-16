/*************************************************************************
    > File Name: sort.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年04月17日 星期五 00时05分55秒
 ************************************************************************/


void sortnum(int *arry, int num)
{
	int tmp;
	for(int i = 0; i < num; i++)
		for(int j = 0; j < num-1; j++)
		{
			if(arry[j] > arry[j+1])
			{
				tmp = arry[j+1];
				arry[j+1] = arry[j];
				arry[j] = tmp;
			}
		}
}
