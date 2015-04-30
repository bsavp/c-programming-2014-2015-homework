#include <stdio.h>

int main() {
	long long int factoriel,a,b;
	factoriel=10;
	b=1;
	for (a=factoriel; a>1; a--) {
		b=b*a;
		printf("%lld * ",a);
	}
	printf("1 = %lld \n",b);
	return 0;
}
