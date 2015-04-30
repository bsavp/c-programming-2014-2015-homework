#include <stdio.h>

void ChristmasTree(int f) {
	int i,j,m;
	
	for (i=0; i<f ;i++) {
		m = (f-1) -i;
		for (j =0; j<m; j++) {
			printf (" ");	
			}
		
		for (j=0; j<i*2+1; j++) {
			printf ("*");			
			}
		
		printf (" \n");
	}
}

int main () {
	ChristmasTree(4);
	printf ("\n");
	ChristmasTree(7);
	printf ("\n");
	ChristmasTree(11);

return 0;
}
