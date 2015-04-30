#include <stdio.h>

int main()
{
	long long unsigned int x, y, z;
	int n;
	x = 2;
	y = 1;
	n = 0;
	while (n<100)
	{
		printf("%llu\n", x);
		n = n+1;
		z = x+y;
		x = y;
		y = z;
	}
	return 0;
}
