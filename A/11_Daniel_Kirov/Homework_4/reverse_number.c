#include <stdio.h>
int ReversedNumber(long int number)
{
int rev = 0;
	while( number > 0)
	{
	rev = rev * 10;
	rev = rev + number % 10;
	number = number / 10;
	}
	return rev;
}
int main()
{
printf("5170984 %d\n", ReversedNumber(5170984));
printf("406567 %d\n", ReversedNumber(406567));
printf("368750 %d\n", ReversedNumber(368750));
printf("2369510 %d\n", ReversedNumber(2369510));
printf("2183293 %d\n", ReversedNumber(2183293));
return 0;
}
