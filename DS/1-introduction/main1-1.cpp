/*************************************************************************
    > File Name: main1-1.cpp
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2015年03月18日 星期三 23时00分01秒
 ************************************************************************/

#include "./../c1.h"
typedef int ElemType;
//typedef ElemType *Triplet;
#include "c1-1.h"
#include "bo1-1.cpp"


int main()
{
	Triplet T;
	ElemType m;
	Status i;
	i = InitTriplet(T, 5, 7, 4);
	printf("初始化后，i=%d(1:成功) T的3个值为", i);
	cout << " " <<T[0] << " "<< T[1] << " "<< T[2] << endl;
	i = Get(T, 2, m);
	if(i == OK)
		cout << "T的第二个值为：" << m << endl;
	i = Put(T, 2, 6);
	if(i == OK)
		cout << "将第二个值改为6之后，T的3个值为：" << T[0] << " " << T[1] << " " << T[2] << endl;
	i = IsAscending(T);
	cout << "调用升序测试后，i=" << i << "(1:是 0：否)" << endl;
	i = IsDescending(T);
	cout << "调用降序测试后，i=" << i << "(1:是 0：否)" << endl;
	if((i = Max(T, m)) == OK)
		cout << "T的最大值是:" << m << endl;
	
	if((i = Min(T, m)) == OK)
		cout << "T的最小值是:" << m << endl;

	DestroyTriplet(T);
	cout << "销毁T后, T=" << T << "(NULL)" << endl;
	return 0;
}
