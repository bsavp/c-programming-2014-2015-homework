#include <stdio.h>

void PrintTree(int height)
{
	int i,k;
	int spaces;
	for (i = 0; i < height; i += 1)
	{
		spaces = (height - 1) - i;
		for (k = 0; k < spaces; k += 1)
		{
			printf(" ");
		}
		for (k = 0; k < i*2 + 1; k += 1)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main ()
{
	PrintTree(4);
	PrintTree(7);
	PrintTree(11);
	return 0;
}
