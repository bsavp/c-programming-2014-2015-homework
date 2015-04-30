#include <stdio.h>

int reversed_number(long int number) {

	int reversed;

	reversed = 0;

	while(number != 0)
	{
		reversed = reversed * 10;
		reversed = reversed + number % 10;
		number = number / 10;
	}

	return reversed;
}



int main() {
		
	printf("Reversed 5170984 = %d\n", reversed_number(5170984));
	printf("Reversed 406567 = %d\n", reversed_number(406567));
	printf("Reversed 368750 = %d\n", reversed_number(368750));
	printf("Reversed2369510 = %d\n", reversed_number(2369510));
	printf("Reversed 2183293 = %d\n", reversed_number(2183293));	


	return 0;
}
