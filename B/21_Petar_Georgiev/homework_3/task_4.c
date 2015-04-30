#include <stdio.h>

int main()
{
int sum,a,b;
a=0;
b=10;
sum=10;
while(a<9){
b--;
sum=sum * b;
a++;
}
printf("%i \n" ,sum);
return 0;
}
