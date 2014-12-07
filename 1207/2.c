/*************************************************************************
    > File Name: 2.c
    > Author: GWG
    > Mail: gaowenguang123@gmail.com 
    > Created Time: 2014年12月07日 星期日 17时22分06秒
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>

int main(int argc,char *argv[])
{
	char *delivery = "";
	int thick = 0;
	int count = 0;
	char ch;

	while((ch = getopt(argc, argv, "d:t")) != EOF)
	{
        switch(ch)
		{
           case 'd':
                   delivery = optarg;
				   break;
		   case 't':
				   thick = 1;
				   break;
		   default:
				   fprintf(stderr, "Unknow option:%s\n", optarg);
				   return 1;
		}
	}
		argc -= optind;
		argv += optind;
		if(thick)
			puts("Thick crust");
		if(delivery[0])
			printf("To be delivery %s\n", delivery);

		puts("Ingredients:");

		for(count = 0; count < argc; count++)
			puts(argv[count]);

	return 0;
}
