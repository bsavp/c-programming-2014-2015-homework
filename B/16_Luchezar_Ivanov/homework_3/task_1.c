#include <stdio.h>
int main()
{
int i;
char a;
for(i=97;i<123;i++)
	{
	a = i;
	printf("%c",a);
	printf("-");
	printf("%d\n",i);
	}
for(i=65;i<91;i++)
	{
	a = i;
	printf("%c",a);
	printf("-");
	printf("%d\n",i);
	}
for(i=48;i<58;i++)
	{
	a = i;
	printf("%c",a);
	printf("-");
	printf("%d\n",i);
	}
return 0;
}
