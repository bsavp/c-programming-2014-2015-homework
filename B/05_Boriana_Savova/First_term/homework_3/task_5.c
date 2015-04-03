#include <stdio.h>
int main(){
int num=21;
for(num;num<30000;num++){
	if(num%3==0 && num%7==0){
		printf("%u\n", num);
	}
}
return 0;
}
