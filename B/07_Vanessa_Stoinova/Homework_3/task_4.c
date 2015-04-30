#include<stdio.h>

 int Factorial(int n) {
      if (n == 0) {

            return 1;

      }else{

            return n * Factorial(n - 1);
    }
}
 int main () {

   int num; 

   num = Factorial(10);

   printf("%d\n", num);

  return 0;
}
