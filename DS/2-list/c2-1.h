/*************************************************************************
    > File Name: c2-1.h
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月20日 星期五 10时09分25秒
 ************************************************************************/

#define LIST_INIT_SIZE 10  //线性表存储空间的初始分配量
#define LIST_INCREMENT 20//分配增量

typedef struct Sqlist 
{
	ElemType *elem;
	int length;
	int listsize;
}Sqlist;


