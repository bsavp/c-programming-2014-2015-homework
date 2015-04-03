#include<stdio.h>
void REV(int number){
	do{
		printf("%d",number%10); 
		number=number/10; 
	}while(number!=0);
	printf("\n");
}

int main(){
	REV(5170984);
	REV(406567);
	REV(368750);
	REV(2369510);
	REV(2183293);
	return 0;
}
