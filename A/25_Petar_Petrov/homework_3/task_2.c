#include<stdio.h>
int main()
{
   int num;
   long L0 = 2,L1 = 1,L = 0;
   
   printf("%li, %li, ",L0,L1);
   for(num = 0; num < 100; num++)
   {
       L = L0 + L1;
       L0 = L1;
       L1 = L;
       printf("%li, ",L1);
   }
   printf("\n");
   return 0;
}
