#include <stdio.h>
int main() {
int i;
i=0;
do{
	if(i%3 && i%7){
         printf("%d \n",i);
               }
        i=i+1;
}while(i<=30000);
return(0);
}
