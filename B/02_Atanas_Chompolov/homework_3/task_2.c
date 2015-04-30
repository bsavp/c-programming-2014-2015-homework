#include <stdio.h>

int main() {
	
	int limitNumber, a, b, c;

	a = 2;
	b = 1;

	printf("Enter the limit of Lucas number: ");
	scanf("%d",&limitNumber);

	while (limitNumber >= a)
	{
		printf("%d, \n",a);
		c = a + b;
		a = b;
		b = c;
	}	
	return 0;
}
