/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月28日 星期日 17时43分56秒
 ************************************************************************/

#include <stdio.h>

typedef struct node
{
   char *question;
   struct node *yes;
   struct node *no;
} node;
