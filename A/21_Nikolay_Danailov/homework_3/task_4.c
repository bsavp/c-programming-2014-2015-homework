#include <stdio.h>

int Factorial(int count)
{
	int result = 1;
	
	int i;
	for (i = 2; i < count; i += 1)
	{
		result *= i;
	}
	
	return result;
}

int main()
{
	printf("%d\n", Factorial(10));
	
	return 0;
}
