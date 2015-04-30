#include<stdio.h>
int main()
{
   int c = 0,i = 0,div = 0,prime_1 = 0,prime_2 = 0;
   
   for(prime_1 = 3, div = 2, c = 2; i<10; prime_1 += 2)
   {
      div = 2;
      while(prime_1 % div != 0)
      {
          div++; 
      }
      if(prime_1 == div)
      {
          prime_2 = prime_1 + 2;
          c = 2;
          while(prime_2 % c != 0)
          {
              c++;
          }
          if(prime_2 == c)
          {
              i++;
              printf("(%d, %d)\n",prime_1,prime_2);
          }
      }
   }
   return 0;
}
