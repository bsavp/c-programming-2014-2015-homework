#include <stdio.h>

int main()
{
	int x, n;
	
	x = 1;	
	
	for (n=1; n<=10; n++)
	{
		x = x * n;
	}

	printf("%d\n", x);
	return 0;
}
