#include <stdio.h>

int main() {
	int n=10;
	int i=1;
	for (i=1;i<10;i++) {
		n=n*i;
	}
	printf("10! = %d\n", n);
	return 0;
}
