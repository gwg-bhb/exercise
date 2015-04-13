/*************************************************************************
    > File Name: algo2-7.cpp
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年04月13日 星期一 20时48分32秒
 ************************************************************************/
#define N 6
typedef char ElemType[N];
#include "c2-1.h"
//#define N 6
#include "c2-3.h"
#include <stdio.h>
#include <iostream>
#include <string.h>

int main()
{
	SLinkList s = {{"", 1}, {"ZHAO", 2},{"QIAN", 3},{"SUN", 4},{"Li", 5},{"ZHOU", 6},{"WU", 7},{"ZHENG", 8},{"WANG", 0}};
	int i = s[0].next;
	while(i != 0)
	{
		printf("%s  %d\n", s[i].data, s[i].next);
		i = s[i].next;
	}

	s[8].next = 9;
    strcpy(s[9].data, "SHI");	//s[9].data = "SHI";
	s[9].next = 0;
	std::cout << "===========================" << std::endl;
	i = s[0].next;
	while(i != 0)
	{
		printf("%s  %d\n", s[i].data, s[i].next);
		i = s[i].next;
	}

	s[6].next = s[7].next;

	std::cout << "==============" << std::endl;
	i = s[0].next;
	while(i != 0)
	{
		printf("%s  %d\n", s[i].data, s[i].next);
		i = s[i].next;
	}
	return 0;
}


