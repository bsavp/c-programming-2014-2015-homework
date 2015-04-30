#include <stdio.h>
int main(){
	int first=1, second=3, sum=0, a, b, c, d;
	while(sum<10){
		first=first+2;
		second=second+2;
		a=1; b=1; c=0; d=0;
	do{
		a=a+1;
		if(first%a==0){
			c=a;
		}
	}
	while(c!=a && a<=first);
	do{
		b=b+1;
		if(second%b==0){
			d=b;
		}
	}
	while(d!=b && b<=second);
		if(c==first & d==second){
			sum=sum+1;
			printf("(%d, %d)\n",first,second);
		}	
	}
return 0;
}
