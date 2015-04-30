#include <stdio.h>

int ReverseNumber(int numb)
{
	int reverse=0;
	
	while(numb>0)
	{
		int remainder = numb % 10;
		numb /= 10;
		reverse += remainder;
		reverse *= 10;
	}
	
	reverse /= 10;
	return reverse;
}

int main ()
{
	printf("%d\n",ReverseNumber(5170984));
	printf("%d\n",ReverseNumber(406567));
	printf("%d\n",ReverseNumber(368750));
	printf("%d\n",ReverseNumber(2369510));
	printf("%d\n",ReverseNumber(2183293));
	return 0;
}
