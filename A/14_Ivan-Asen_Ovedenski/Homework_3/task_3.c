#include <stdio.h>

int main (){
int a,i,dev,vid,b;
a=1;
i=0;

for(a=1;i<10;a+=2){
dev=2;
while(a%dev!=0){ 
 dev++; }
 if (dev==a){
  b=a+2;
  vid=2; 
  while(b%vid!=0){
  vid++; }
  	if (b==vid){ printf("(%d-%d)\n",a,b);
		i++;			
	 }  
   }
}
return 0 ;
}
