#include <stdio.h>

typedef enum { false, true } bool;

bool IsPrime(int numb)
{
	int i;
	for (i = 2; i <= numb/2; i += 1)
	{
		if(numb % i == 0)
		{
			return false;
		}
	}
	return true;
}

int FindNextPrime(int startNumb)
{
	int numb = startNumb;
	while(!IsPrime(numb))
	{
		numb++;
	}
	return numb;
}

int main ()
{
	int firstPrime;
	int twinPrimeCount=0;
	firstPrime = FindNextPrime(2);
	do
	{
		int secondPrime = FindNextPrime(firstPrime+1);
		if(secondPrime - firstPrime == 2)
		{
			printf("(%d, %d)\n",firstPrime,secondPrime);
			twinPrimeCount++;
		}
		firstPrime = secondPrime;
	}
	while(twinPrimeCount<10);
	
	return 0;
}
