#include <stdio.h>

int main ()
{
	int i;
	for (i = 21; i < 30000; i += 1)
	{
		if(i % 3 == 0 && i % 7 == 0 && i % 2 != 0)
		{
			printf("%d\n",i);
		}
	}
	
	return 0;
}
