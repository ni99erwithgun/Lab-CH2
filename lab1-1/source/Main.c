#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int i=0, j=0;
	printf("<1>\n");
	for (i = 0; i < 10; i++)
	{
		if (i == 0 || i==9)
		{
			printf("XXXXXXXXXX\n");
		}
		else
		{
			printf("X--------X\n");
		}
	}
	printf("<2>\n");
	for (i = 0; i < 10; i++)
	{
		if (i == 0 || i == 1 || i == 2 || i == 7|| i==8 || i==9)
		{
			printf("XXXXXXXXXX\n");
		}
		else
		{
			printf("XXX----XXX\n");
		}
	}
	
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
	printf("<4>\n");
	t = 1, t2 = 8;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i>0 && i<5&&j==t)
			{
				printf("X");
			}
			else if (i>0 && i<5&&j==t2)
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
	printf("<5>\n");
	t = 9;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i==j)
			{
				printf("X");
			}
			else if( j==t)
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
	system("pause");
}