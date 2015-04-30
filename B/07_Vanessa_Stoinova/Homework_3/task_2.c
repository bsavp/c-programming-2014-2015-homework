#include<stdio.h> 

int main () {

   unsigned long long int a, b, c ; 

   int br, ostatukA, ostatukB, obshtOstatuk;
   
   a = 2;
   
   b = 1;

   printf("%llu, %llu, ", a, b) ;

   for ( br = 0; br <= 90; br ++) {
     c = a + b ;
     a = b ;
     b = c;
     printf("%llu, ", c);
   } 
   ostatukA = a % 100;
   a = a / 100;
   ostatukB = b % 100;
   b = b / 100;
  for(br = 1; br <= 8; br++) {
     obshtOstatuk = ostatukA + ostatukB ;
     c = a + b ;
     if(obshtOstatuk >= 100) {
         c = c + 1;
         obshtOstatuk = obshtOstatuk % 100;
     }
     a = b ;
     b = c ;
     ostatukA = ostatukB;
     ostatukB = obshtOstatuk;
   printf("%llu%d , ", c, obshtOstatuk);
  }
return 0;
}
