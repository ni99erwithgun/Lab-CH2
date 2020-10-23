#include <stdio.h>
#include<stdlib.h>
int Han_Xin_3()
{
	int i = 0, j = 0;
	printf("<3>\n");
	int t = 4, t2 = 5;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i < 5) && (j == t))
			{
				printf("X");
				t--;
			}
			else if (i < 5 && j == t2)
			{
				printf("X");
			}
			else if (i == 4)
			{
				printf("X");
			}
			else
			{
				printf("-");
			}
		}
		t2++;
		printf("\n");
	}

}