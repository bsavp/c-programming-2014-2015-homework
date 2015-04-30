#include<stdio.h>

#define Green "\x1b[32m"

#define Light "\x1b[1m"

#define Yellow "\x1b[33m"

#define Reset "\x1b[0m"

void ChristmasTree (int num)  
  { 
     int br,Stars,j,a,Space; 
     for(br = 1; br <= num ; br ++ ) 
     {
       for( j = 1 ; j < 2*num ; j ++) 
       {
           Stars = br + (br -1) ;
           Space = 2*num - ( 1 + Stars ) ;
           for(a = 1 ; a <= 2*num - 1 ; a++ ) {
              if(a <= Space/2 ) {
                 printf(" ");
              }else{
                 if(Stars == 1 ) {
                     printf(Light);
                     printf(Yellow "*");
                     break;
                 }else{
                     printf(Green "*");
                     if(a - (Space/2) == Stars ) {
                         break;
                     }
                 }
              }
           }
         printf("\n");
         break; 
        }
     }
   }
int main()
 {
   ChristmasTree(4);
   ChristmasTree(7);
   ChristmasTree(11);
   printf(Reset "\n"); 
   return 0;
 }
