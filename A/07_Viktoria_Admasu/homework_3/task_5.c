#include <stdio.h>
int main()
{
int num;

for (num = 1; num <= 30000; num += 1)
	{
	if (num % 2 != 0 && num % 3 == 0 && num % 7 == 0)
		{
		printf ("%d\n",num);
		}
	}

return 0;
}
