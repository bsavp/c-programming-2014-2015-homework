#include<stdio.h>

	int main (){
		int g,d,g1,d1;	//g-4islitel,d-znamenatel
		char i;		//i-broq4
			g=1;
			d=2;
			i=0;
			printf("%d, ",g);
			while (i<100){
				g1=g+d;
				d1=g;
				g=g1;
				d=d1;
				i=i+1;
				printf("%d, ",g);
			}
		return 0;
		}
