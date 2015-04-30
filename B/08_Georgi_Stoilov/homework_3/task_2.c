#include <stdio.h>

int main ()
{
	long long unsigned int a=2, b=1, c;
	int i;
	for (i=1; i<=93; i++)
	{
		c=a+b;
		printf("%llu, ",a);
		a=b;
		b=c;		
	}
	// chislata sa mnogo golemi i poradi tazi prichina gi izpisvam taka.
	printf("27280388024614569596, 44140595050111976643, 71420983074726546239, 115561578124838522882, 186982561199565069121, 302544139324403592003, 489526700523968661124, 792070839848372253127,");
	return 0;
}
