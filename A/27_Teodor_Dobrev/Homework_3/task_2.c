#include <stdio.h>

int main() {
	int chislo;
	long long int a,b,c;
	a = 2;
	b = 1;
	c = (a+b);
	printf("%lld, ",a);
	printf("%lld, ",b);
	for ( chislo = 0; chislo < 100; chislo++ )	{	
		printf("%lld, ",c);
		a = b;
		b = c;
		c = (a+b);
	}
	return 0;
}
