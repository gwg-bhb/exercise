/*************************************************************************
    > File Name: 1.c
    > Author: GWG
    > Mail: 718324404@qq.com 
    > Created Time: 2014年12月17日 星期三 12时29分10秒
 ************************************************************************/

#include <stdio.h>


struct fish
{
	const char *name;
	const char *species;
	int teeth;
	int age;
};
void label(struct fish f)
{
	printf("Name: %s\nSpeciecs:%s\n%i years old,%i teeth\n",
			f.name, f.species, f.age, f.teeth);	
}
void catalog(struct fish f)
{
	printf("%s is a %s with %i teeth. He is %i\n",
			f.name, f.species, f.teeth, f.age);	
}
int main(void)
{
	struct fish fish1 = {"Snappy", "Piranha", 69, 4};
	label(fish1);
	catalog(fish1);
	return 0;
}
