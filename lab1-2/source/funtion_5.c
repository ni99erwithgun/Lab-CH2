#include <stdio.h>
#include<stdlib.h>
int Han_Xin_5()
{
	int i = 0, j = 0;
	printf("<5>\n");
	int t = 9;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
			{
				printf("X");
			}
			else if (j == t)
			{
				t--;
				printf("X");
			}
			else
			{
				printf("-");
			}
		}

		printf("\n");
	}

}