#include <stdio.h>

int fun (int n){
  if(n == 0) {
   return 2;}
  if(n == 1) {
   return 1;}
  if (n>1) {
   return fun(n-1)+fun(n-2);
}
 }

int main(){
int n=0 ;
 while (n<10){
 printf("%d\n",fun(n) );
 n++; 
 }
 return 0 ;
}
