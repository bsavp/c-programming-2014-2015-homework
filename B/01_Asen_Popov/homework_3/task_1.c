#include <stdio.h>

int main() {
	int a;
	for (a=97; a<123; a++) {
	printf("%c - %d\n", a, a);
	}
	printf("\n");
	for (a=65; a<91; a++) {
	printf("%c - %d\n", a, a);
	}
	printf("\n");
	for (a=48; a<57; a++) {
	printf("%c - %d\n", a, a);
	}

	return 0;
}

