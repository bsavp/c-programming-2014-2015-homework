#include<stdio.h>
	int main (){
	int a;
	a=0;
	while(a<30000){
		a=a+1;
		if ((a%2!=0)&&(a%3==0)&&(a%7==0)){
		printf("%d \n",a);
		}
	}
	return 0;
	}
