#include <stdio.h>

void reverse (int num) {
	int a;
	
	while (num!=0) {
		a=num%10;		
		printf ("%d", a);
		num=num/10;
	}
	printf ("\n");
}

int main () {
	reverse (5170984);
	reverse (406567);
	reverse (368750);
	reverse (2369510);
	reverse (2183293);

return 0;
}
