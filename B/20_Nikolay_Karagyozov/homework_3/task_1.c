#include <stdio.h>

int main(){

	int i,j,jmax;
	char c;

	for(i=1; i<4; i++){

		switch(i){
			case 1: 
				j=97;
				jmax=122;
				break;
			case 2: 
				j=65;
				jmax=90;
				break;
			case 3:
				j=48;
				jmax=57;
				break;
		};

		for(j; j<=jmax;j++){
			c=j;
			printf("%c - %d\n",c,c);
		};

	};
	return 0;
}