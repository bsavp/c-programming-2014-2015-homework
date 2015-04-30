#include <stdio.h>

#define black "\033[0;30m"
#define green "\033[0;32m"
#define none   "\033[0m"  

void PrintChristmasTree(int height)
{
	int i;
	for (i = 0; i < height; ++i)
	{
		int j;
		for (j = 0; j < height - (i + 1); ++j)
		{
			printf(" ");
		}
		
		for (j = 0; j < i * 2 + 1; ++j)
		{
			if (i == 0)
			{
				printf(black);
			}
			else
			{
				printf(green);
			}
			
			printf("*");
			printf(none);
			
		}
		
		printf("\n");
	}
}

int main()
{
	PrintChristmasTree(4);
	PrintChristmasTree(7);
	PrintChristmasTree(11);
	
	return 0;
}
