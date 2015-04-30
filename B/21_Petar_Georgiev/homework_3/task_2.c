#include <stdio.h>
int main()
{
long long unsigned int a1,a2,b;
a1=2;
printf("%i, " ,a1);
a2=1;
printf("%i, " ,a2);
b=0;
while(b<98){
a1=a2+a1;
a2=a1+a2;
printf("%llu, " ,a1);
printf("%llu, " ,a2);
b++;
}
return 0;
}
