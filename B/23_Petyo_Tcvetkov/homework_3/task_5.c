include<stdio.h>

int main () {  
   long long int i;
   for(i = 2; i < 30000; i ++) {
        if(i % 2 != 0 && i % 3 == 0 && i % 7 == 0) {
        printf("%lld\n", i);
        } 
   }
return 0;
}