#include<stdio.h>	
	int main() {
		unsigned long long int n,l,j,i,k,o,e,r,t,h,g;
		
			k=0; h=0; i=1;
			o=5170984 ;e=406567; r=368750; t=2369510; g=2183293;
				do{
				
				k=0;
				h=h+1;
				switch(h){
				case 1: n=o; break;
				case 2:	n=e; break;
				case 3: n=r; break;
				case 4: n=t; break;
				case 5: n=g; break;} 
				j=n;
				do {
					k=k*10 + n%10;
					n=n/10;
				} while (n!=0);
			
			printf("%llu - %llu ",j,k);
			printf("\n");
			
				}while(h<5);	
		return 0;
	}
