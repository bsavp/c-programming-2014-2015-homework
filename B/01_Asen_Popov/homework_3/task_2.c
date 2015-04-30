#include <stdio.h>

int main(){

	long long int l0=2;
	long long int l1=1;
	long long int ln=0;
	printf("%lld, ", l0);
	printf("%lld, ", l1);

	int i;
	for (i=1; i<100; i++) {
		ln=l0+l1;
		l0=l1;		
		l1=ln;
		printf("%lld, ",ln);
	}
	//дори long long int не е достатъчно голям за да изпише последните 10 числа
	return 0;
}
