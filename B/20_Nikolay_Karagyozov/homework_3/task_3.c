#include <stdio.h>

int main(){
	int done = 1;
	int a = 2;
	int i;
	int prime = 1;

	while(done<=10){

		for(i=2; i<a; i++){
			if(a%i==0){
				prime=0;
			};
		};

		for(i=2; i<a+2; i++){
			if((a+2)%i==0){
				prime=0;
			};
		};

		if(prime!=0){
			printf("(%d, %d)\n", a, a+2);
			done+=1;
		} else
			prime=1;
		a+=1;

	};
	return 0;
}