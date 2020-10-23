#include <stdio.h>
#include<stdlib.h>
int Han_Xin_1()
{
	int i = 0, j = 0;
	printf("<1>\n");
	for (i = 0; i < 10; i++)
	{
		if (i == 0 || i == 9)
		{
			printf("XXXXXXXXXX\n");
		}
		else
		{
			printf("X--------X\n");
		}
	}

}