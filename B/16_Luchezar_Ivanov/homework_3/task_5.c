#include <stdio.h>
int main()
{
int a;
for(a=1;a<30001;a++)
	{
	if(a%3==0 && a%7==0) { printf("%d\n",a); }
	}
return 0;
}
