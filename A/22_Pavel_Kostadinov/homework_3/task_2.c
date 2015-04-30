#include <stdio.h>
int main()
{
int broqch;
long long int a;
long long int b;
a = 2;
b = 1;
printf("%lld",a);
printf(", ");
printf("%lld",b);
printf(", ");
for(broqh=1;broqch<49;broqch++)
 {
 a = a + b;
 printf("%lld",a);
 printf(", ");
 b = b + a;
 printf("%lld",b);
 printf(", ");
 }
return 0;
}
