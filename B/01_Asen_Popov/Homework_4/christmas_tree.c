#include <stdio.h>

int main() {
	int r=11,sp,i,k=0;
	for (i=1; i<=r;i++) {
		for (sp=1; sp<=r+1-i;sp++) {
			printf(" ");
		}
		while (k!=2*i-1) {
			printf("*");
			k++;
		}
		k=0;
		printf("\n");
	}
	
	return 0;
}
