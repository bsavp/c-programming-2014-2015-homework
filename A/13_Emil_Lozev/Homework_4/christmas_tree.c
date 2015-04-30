#include<stdio.h>

int main(){
  int i,p;
  char c;
  p = 0;

     for(i = 4; i >= 1;i--){
		  p = i;
	printf("\n");
	while(p >= 2){
		  printf(" ");
		  p--;
        }

		 printf("*");		
	     p = i;
        while(p <= 3){
		printf("**");
		p++;
	}	
}
  printf("\n");
	
	     for(i = 7; i >= 1;i--){
		  p = i;
	printf("\n");
	while(p >= 2){
		  printf(" ");
		  p--;
        }

		 printf("*");		
	     p = i;
        while(p <= 6){
		printf("**");
		p++;
	}	
}
  printf("\n");
 	
	     for(i = 11; i >= 1;i--){
		  p = i;
	printf("\n");
	while(p >= 2){
		  printf(" ");
		  p--;
        }

		 printf("*");		
	     p = i;
        while(p <= 10){
		printf("**");
		p++;
	}	
}
  printf("\n");
 
 return 0;
}
