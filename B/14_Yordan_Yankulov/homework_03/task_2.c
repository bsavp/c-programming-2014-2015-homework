#include <stdio.h>

int main(){
	int n;
	unsigned long res=3;
	unsigned long fn=2;
	unsigned long sn=1;
	printf("%lu,%lu,",fn,sn);
	for(n=1;n<=100;n+=1){
	res=fn+sn;
	printf("%lu,",res);
	fn=sn;
	sn=res;
	}
	printf("\n");



	return 0;
}
