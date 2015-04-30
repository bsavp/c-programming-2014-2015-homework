#include <stdio.h>

int ReverseNumber(int num)
{
	int rev = 0;

	while (num != 0)
	{
		rev =  rev * 10;
		rev = rev + num % 10;
		num = num / 10;
	}
	
	return rev;
}

int main()
{
	printf ("5170984   %d\n",ReverseNumber(5170984));
	printf ("406567   %d\n",ReverseNumber(406567));
	printf ("368750   %d\n",ReverseNumber(368750));
	printf ("2369510   %d\n",ReverseNumber(2369510));
	printf ("2183293   %d\n",ReverseNumber(2183293));
	
	return 0;
}

