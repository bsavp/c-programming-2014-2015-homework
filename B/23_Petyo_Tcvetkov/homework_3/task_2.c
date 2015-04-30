#include <stdio.h>

int main ()
{
	long long unsigned int f=2;
	long long unsigned int s=1;
	long long int t;
	int i;
	printf("%llu, %llu, ", f, s);
	
	
	
	for (i = 2; i < 93; i ++)
	{
		t = f + s;
		printf(", %llu",t);
		f = s;
		s = t;		
	}
	
	return 0;
}