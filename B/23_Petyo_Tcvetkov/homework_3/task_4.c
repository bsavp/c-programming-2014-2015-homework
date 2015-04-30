#include <stdio.h>



int main()
{
	int count=10;
	int result = 1;
	
	int i;
	for (i = 2; i < count; i += 1)
	{
		result *= i;
	}
	printf("%d\n", result);
	
	return 0;
}