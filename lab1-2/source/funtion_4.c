#include <stdio.h>
#include<stdlib.h>
int Han_Xin_4()
{
	int i = 0, j = 0;
	printf("<4>\n");
	int t = 1, t2 = 8;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i > 0 && i < 5 && j == t)
			{
				printf("X");
			}
			else if (i > 0 && i < 5 && j == t2)
			{
				t++;
				printf("X");
				t2--;
			}
			else if (i == 0)
			{
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