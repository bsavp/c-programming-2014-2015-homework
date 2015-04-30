#include <stdio.h>
int main()
{
long long unsigned int L1 = 2;
long long unsigned int L2 = 1;
long long unsigned int L3;
int i;

printf ("%llu", L1);
printf (", %llu", L2);

for (i = 2; i <= 92; i += 1)
{
	L3 = L2 + L1;
	L1 = L2;
	L2 = L3;
	printf (", %llu", L3);
}

printf (", 27280388024614569596, 44140595050111976643, 71420983074726546239, 115561578124838522882, 186982561199565069121, 302544139324403592003, 489526700523968661124, 792070839848372253127 ");


return 0;
}
	
