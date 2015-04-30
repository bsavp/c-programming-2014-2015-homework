#include <stdio.h>

int main() {
	long int n=2183293, obr=0;
	long int n1=n;
	while (n!=0) {
		obr=obr*10;
		obr=obr+n%10;
		n=n/10;
	}
	printf("%ld => %ld\n", n1, obr);
	return 0;
}
