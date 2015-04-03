#include<stdio.h>
void PT(int h){
	int rolls,a,spaces,i;
	a=1;
	for(rolls=0;rolls<h;rolls++){
		for(spaces=0;spaces<(h-rolls);spaces++){
			printf(" ");	
		};
		for(i=0;i<a;i++){printf("*");};
		printf("\n");
	a=a+2;
	}
}

int main(){
	PT(4);
	PT(7);
	PT(11);
	return 0;
}
