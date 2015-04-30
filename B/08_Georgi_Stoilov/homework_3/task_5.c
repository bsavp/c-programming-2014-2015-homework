#include<stdio.h>

int main(){
int a;
	for(a=0; a<=30000; a++){
		if(a%3 ==0 && a%7 ==0){
			if(a%2 !=0){
				printf("%d\n",a);
			}		
		}
	}
return 0;
}
