/*************************************************************************
    > File Name: func2-3.cpp
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月20日 星期五 19时19分45秒
 ************************************************************************/

Status equal(ElemType c1, ElemType c2)
{
	//判断相等
	if(c1 == c2)
		return TRUE;
	else
		return FALSE;
}

int comp(ElemType a, ElemType b)
{
	if(a == b)
		return 0;
	else if(0 > (a-b))
		return -1;
	else
		return 1;
}

void print(ElemType c)
{
	printf("%d ", c);
}

void print2(ElemType c)
{
	printf("%c ", c);
}

void print1(ElemType &c)
{
	printf("%d ", c);
}
