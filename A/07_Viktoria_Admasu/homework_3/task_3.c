#include <stdio.h>
int main()
{
int tp1,tp2,n,i;
tp1 = 1;
tp2 = 1;
n = 0;
i = 0;

while (i < 10)
{
	n++;
	while (i != n)
	{
		tp1++;
		tp2 = tp1 + 2;
		if (tp1 == 3 || tp1 == 5)
		{
			i++;
			printf ("(%d, %d)\n", tp1, tp2);
		}
		
		else 
		{
			if (tp1 % 2 != 0 && tp1 % 3 != 0 && tp1 % 4 != 0 && tp1 % 5 != 0 && tp1 % 6 != 0 && tp1 % 7 != 0 && tp1 % 8 != 0 && tp1 % 9 != 0 && tp2 % 2 != 0 && tp2 % 3 != 0 && tp2 % 4 != 0 && tp2 % 5 != 0 && tp2 % 6 != 0 && tp2 % 7 != 0 && tp2 % 8 != 0 && tp2 % 9 != 0)
			{
				i++;
				printf ("(%d, %d)\n",tp1,tp2);
			}
		}
	}
}
return 0;
}
