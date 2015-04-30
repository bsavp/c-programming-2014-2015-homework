#include <stdio.h>
int main(){
	int fnum=1;
	int snum=3;
	int sum=0;
	int a;
	int m;
	int b;
	int n;
	while(sum<10){
	fnum=fnum+2;
	snum=snum+2;
	a=1;
	b=1;
	m=0;
	n=0;
	do{
		a=a+1;
		if(fnum%a==0){
		m=a;
		}
	}while(m!=a && a<=fnum);
	do{
		b=b+1;
		if(snum%b==0){
		n=b;
		}
	}while(n!=b && b<=snum);
	if(m==fnum & n==snum){
	sum=sum+1;
	printf("(%d,%d)\n",fnum,snum);
	}	
	}
return 0;
}
