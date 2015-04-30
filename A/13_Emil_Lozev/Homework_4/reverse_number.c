#include<stdio.h>

int main(){
  int num, i, res,c_num;
	i = 0;
	res = 0;
	c_num = 1;

 while(c_num!=5){
	switch(c_num){
	 case 1 :
  	  	num = 5170984;
  		    while(num != 0){
			res = num % 10;
			if(res!=0){
			 printf("%d",res);
			}
			num = (num - res) / 10;
		}
  	 		printf("\n");	
		
		break;
	case 2 :
		num = 406567;
  		    while(num != 0){
			res = num % 10;
			if(res!=0){
			 printf("%d",res);
			}
			num = (num - res) / 10;
		}
  	 		printf("\n");	
		
		break;
	case 3 : 
		num = 368750;
  		    while(num != 0){
			res = num % 10;
			if(res!=0){
			 printf("%d",res);
			}
			num = (num - res) / 10;
		}
  	 		printf("\n");	
		
		break;
	case 4 : 
		num = 2369510;
  		    while(num != 0){
			res = num % 10;
			if(res!=0){
			 printf("%d",res);
			}
			num = (num - res) / 10;
		}
  	 		printf("\n");	
		
		break;
	case 5 : 
		num = 2183293;
  		    while(num != 0){
			res = num % 10;
			if(res!=0){
			 printf("%d",res);
			}
			num = (num - res) / 10;
		}
  	 		printf("\n");	
		
		break;
		}
	c_num = c_num + 1;
	}
 return 0; 
}
