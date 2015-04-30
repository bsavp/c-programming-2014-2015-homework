#include <stdio.h>

int main() {

	int a,b,c,booleannum;
	bool boolean;
	a=1;
	booleannum=0;
	while (booleannum <= 10) {
		while (boolean=false) {
			a++;
			c=0;
			for (b=1; b<=a; b++) {
				if (a % b = 0) {
					c++;
				}
			}
			if (c=2) {
				boolean=true;
				printf("%i \n",a);
			}
		}
		booleannum++;
	}

}
