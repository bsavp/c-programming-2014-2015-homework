#include<stdio.h>

int fact(int res);

int main()
{
 int n = 10;
 
 printf("%d! = %d\n",n,fact(n));
 return 0;
}

int fact(int res)
{
   int ex = 0;
   
   if(res == 0)
   {
       ex = 1;
   }
   else
   {
      ex = res*fact(res-1);
   }
   return ex;
}
