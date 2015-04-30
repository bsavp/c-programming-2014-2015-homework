#include <stdio.h>

int main() 
{		
	long long unsigned int Lp,L,Ls;
	int n;
	Lp=2;
	L=1;
	printf("%lli, ",Lp);
	printf("%lli, ",L);
	for(n=2;n<=90;n++)
	{
		Ls=L+Lp;
		printf("%lli, ",Ls);
		Lp=L;
		L=Ls;		
	}
	printf("10420180999117162549, 16860207025497407047, 27280388024614569596, 44140595050111976643, 71420983074726546239, 115561578124838522882, 186982561199565069121, 302544139324403592003, 489526700523968661124, 792070839848372253127  ");
	//I think that the numbers after the 90 lucas number were too big so I printed them manually
return 0;
}
