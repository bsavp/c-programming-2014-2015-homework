#include <stdio.h>

int main(){
	int i;
	for(i=21; i<=30000; i+=21){
		if(i%3==0)
			if (i%2!=0)
				printf("%d\n",i);
	};
	return 0;
}