#include <stdio.h>
int main()
{
int i;
long long int a; 
long long int b;
a = 2;
b = 1;
printf("%lld",a);
printf(", ");
printf("%lld",b);
printf(", ");
for(i=1;i<49;i++)
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
