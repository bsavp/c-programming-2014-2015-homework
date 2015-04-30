#include<stdio.h>
	int main() {	
	int n,a,k,j,l;	
		n=3;	j=5; l=7;
		printf("(%d,%d)",n,j);
		printf("\n");
		printf("(%d,%d)",j,l);
		printf("\n");
		while(n<l){
		n=n+1; }
		do {
		
		a=1;
		do {
		a=a+1;
		} while (n%a!=0);
		if (n%a==0){
		if (n=a){
		printf("%d",n); n=n+1;} else {n=n+1;} }
		
		} while (n<61);
		 
		
	return 0;
		}
		
		 
