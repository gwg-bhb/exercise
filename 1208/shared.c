/*************************************************************************
    > File Name: shared.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月09日 星期二 00时18分51秒
 ************************************************************************/

void encrypt(char *message)
{
	char c;
	while(*message)
	{
		*message = *message ^ 31;
		message++;
	}
}
