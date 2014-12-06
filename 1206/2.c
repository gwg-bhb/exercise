/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月06日 星期六 23时15分13秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

int x[2] = {1, 2};
int y[2] = {3, 4};
int z[2];

int main(void)
{
	void *handle;
	void (*addvec)(int *, int *, int *, int);
	char *error;

	handle = dlopen("./libvector.so", RTLD_LAZY);
	if(NULL == handle)
	{
		fprintf(stderr, "dlopen%s\n", dlerror());
		exit(1);
	}

	addvec = dlsym(handle, "addvec1");
	if((error = dlerror()) != NULL)
	{
		fprintf(stderr, "dlsym%s\n", error);
		fprintf(stderr, "---%s\n", dlerror());
		exit(1);
	}

	addvec(x, y, z, 2);
	printf("z = [%d %d]\n", z[0], z[1]);

	if(dlclose(handle) < 0)
	{
		fprintf(stderr, "%s\n", dlerror());
		exit(1);
	}

	return 0;
}
