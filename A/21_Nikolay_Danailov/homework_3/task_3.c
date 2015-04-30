#include <stdio.h>

typedef enum { false, true } bool;

bool IsPrime(int number)
{
	int i;
	
	for (i = 2; number % i != 0; i += 1) {}
	
	if (number == i)
	{
		return true;
	}
	
	return false;
}

int main()
{
	int i;
	int foundCombinations = 0;
	int previousPrime = 0;
	
	for (i = 3; foundCombinations < 10; i += 1) //i starts at 3 because it counts (0, 2) as a twin prime if i starts at 2
	{
		if (IsPrime(i))
		{
			if (previousPrime == i - 2)
			{
				printf("(%d, %d)\n", previousPrime, i);
				foundCombinations++;
			}
			
			previousPrime = i;
		}
	}
	
	return 0;
}

