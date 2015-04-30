#include<stdio.h>

int main () {
  
   long long int num;

   for(num = 2; num < 30000; num ++) {

        if(num % 2 != 0 && num % 3 == 0 && num % 7 == 0) {

             printf("%lld\n", num);
        } 
   }
return 0;
}
