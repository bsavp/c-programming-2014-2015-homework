#include <stdio.h>
int main()
{
	int rows, i, i2, a, m;
	printf("How many rows?\n");
	scanf("%d", &rows);
	for (i=1; i<=rows; i++)
	{
		m = rows - i;
		a = 0;
		while(a<=m)
		{
			a++;
			printf(" ");
		}
		for(i2=1; i2<=2*i-1; i2++)
		printf("*");
		printf("\n");
	}
	return 0;
}
