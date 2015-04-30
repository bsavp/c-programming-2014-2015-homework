#include <stdio.h>

void revNumber(int number){

	int temp;
	int newNumber = 0;
	int i;

	while(number != 0){

		temp = number%10;

		if(newNumber!=0)
			newNumber*=10;
		
		newNumber+=temp;

		number /= 10;
	};

	printf("%d\n", newNumber);
};

int main(){

	int number; // write number here

	number = 5170984;
	revNumber(number);

	number = 406567;
	revNumber(number);

	number = 368750;
	revNumber(number);

	number = 2369510;
	revNumber(number);

	number = 2183293;
	revNumber(number);

	return 0;
}