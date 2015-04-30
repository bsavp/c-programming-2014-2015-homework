#include<stdio.h>
int main()
{
  int odd = 0, div1 = 0, div2 = 0;
  
  for(odd = 1, div1 = 3, div2 = 7; odd < 30000; odd += 2)
  {
     if(odd % div1 == 0 && odd % div2 == 0)
     {
        printf("%d\n",odd);
     }
  }
  return 0;
}
