#include <stdio.h>
int main()
{
int f,num;

f = 1;

for (num = 1; num <= 10; num += 1)
	{
	f = num * f;
	}

printf ("%d\n", f);

return 0;
} 
