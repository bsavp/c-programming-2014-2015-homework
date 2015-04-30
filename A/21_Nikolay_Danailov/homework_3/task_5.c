#include <stdio.h>

const MAX_NUMBER = 30000;

int main()
{
	int i;
	for (i = 0; i < MAX_NUMBER; i += 7)
	{
		if (i % 3 == 0 && i % 2 != 0)
		{
			printf("%d\n", i);
		}
	}
	
	return 0;
}
