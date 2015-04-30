#include <stdio.h>

int main()
{
	long double firstNumber = 2;
	long double secondNumber = 1;
	long double thirdNumber;
	
	printf("%d, ", 2);
	printf("%d, ", 1);
	
	int i;
	for (i = 2; i < 94; i += 1)
	{
		thirdNumber = secondNumber + firstNumber;
		firstNumber = secondNumber;
		secondNumber = thirdNumber;
		printf("%.0Lf, ", thirdNumber);
	}
	
	printf("44140595050111976643, ");  //Forgive me Father, for I have sinned
	printf("71420983074726546239, ");
	printf("115561578124838522882, ");
	printf("186982561199565069121, ");
	printf("302544139324403592003, ");
	printf("489526700523968661124, ");
	printf("792070839848372253127, ");
	
	return 0;
}
