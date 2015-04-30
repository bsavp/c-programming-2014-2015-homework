#include <stdio.h>
#include <math.h>

int main(){

	long long unsigned int a = 2;
	long long unsigned int b = 1;
	long long unsigned int c = 0;

    int i;

    printf("%llu, %llu",a,b);
	for(i=1;i<=98;i++){
		c=a+b;
		printf(", %llu",c);
		a=b;
		b=c;
	};

	return 0;
}