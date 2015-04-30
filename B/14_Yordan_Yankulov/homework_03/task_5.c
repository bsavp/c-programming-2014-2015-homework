#include <stdio.h>

int main(){
	int fnum=3;
	int snum=7;
	long int num=1;
	for(num=1;num<=30000;num+=2){
		if(num%fnum==0 && num%snum==0){
		printf("%li\n",num);
	}
	}



return 0;
}
