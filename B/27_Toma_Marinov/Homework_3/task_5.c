#include <stdio.h>

int main()
{
	int y;
	for (y = 1; y<=30000; y++)
	{
		if ((y%3 == 0)&&(y%7 == 0)&&(y%2 != 0))
		{
			printf("%d\n", y);
		}
	}
	return 0;
}
