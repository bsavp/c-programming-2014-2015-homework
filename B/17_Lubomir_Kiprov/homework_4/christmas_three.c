#include<stdio.h>
	int main() {

		int i,k,j,n,q,r,t;
		char a,b;
		
			q=0; r=4;
			t=1;
			j=1;
			n=0;
			a='*';
			b=' ';
		switch (t) {
		case 1: {
		k=4;
		do {
			i=0;
			r=r-1;
			q=0;
				if (r>=1) {
					do {
						q=q+1;	
						printf("%c",b);
					} while (q<r); }
					do {
						i=i+1;
						printf("%c",a);
					} while (i<j);
			printf("\n");
			j=j+2;
			n=n+1;
		} while(n<k);
			 }
			printf("\n");
		case 2: {
		k=7;
		q=0; r=7;
			t=1;
			j=1;
			n=0;
		do {
			i=0;
			r=r-1;
			q=0;
				if (r>=1) {
					do {
						q=q+1;	
						printf("%c",b);
					} while (q<r); }
					do {
						i=i+1;
						printf("%c",a);
					} while (i<j);
			printf("\n");
			j=j+2;
			n=n+1;
		} while(n<k);
			}
			printf("\n");
		case 3: {
		k=11;
		q=0; r=11;
			t=1;
			j=1;
			n=0;
		do {
			i=0;
			r=r-1;
			q=0;
				if (r>=1) {
					do {
						q=q+1;	
						printf("%c",b);
					} while (q<r); }
					do {
						i=i+1;
						printf("%c",a);
					} while (i<j);
			printf("\n");
			j=j+2;
			n=n+1;
		} while(n<k);
			break;}
		t=t+1; }
		
	return 0;
	}
