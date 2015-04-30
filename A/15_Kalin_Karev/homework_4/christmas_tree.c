#include <stdio.h>

void christmas_tree(int h)
{
	int i, n, p;
	int last = 1;
	int chars = 1;
	for (i = 2; i <= h; i++)
	{
		last = last + 2;
	}
	int freespaces = last/2;
	for (i = 1; i <= h; i++)
	{
		for (n = 1; n <= freespaces; n++)
		{
			printf(" ");
		}
		for (p = 1; p <= chars; p++)
		{
			printf("*");
		}
		chars = chars + 2;
		freespaces = freespaces - 1;
		printf("\n");
	}
}
int main(){
	christmas_tree(4);
	christmas_tree(7);
	christmas_tree(11);	
	return 0;
}
