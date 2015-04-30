#include<stdio.h>
int reverse(int num)
{
   int rev = 0;
   
   while(num > 0)
   {
      rev = num % 10;
      printf("%d",rev);
      num = num / 10;
   }
   printf("\n");
   return 0;
}

int main()
{
   reverse(5170984);
   reverse(406567);
   reverse(368750);
   reverse(2369510);
   reverse(2183293);
   return 0;
}
