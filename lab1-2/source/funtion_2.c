#include <stdio.h>
#include<stdlib.h>
int Han_Xin_2()
{
	int i = 0, j = 0;
	printf("<2>\n");
	for (i = 0; i < 10; i++)
	{
		if (i == 0 || i == 1 || i == 2 || i == 7 || i == 8 || i == 9)
		{
			printf("XXXXXXXXXX\n");
		}
		else
		{
			printf("XXX----XXX\n");
		}
	}

}