#include <stdio.h>

int main(){
	int n, n1, n2, n3, n4, b = 0, b1 = 0, b2 = 0, b3 = 0, b4 = 0;
	
	n = 5170984;
	n1 = 406567;
	n2 = 368750;
	n3 = 2369510;
	n4 = 2183293; 

	while (n != 0)
	{
		b = b *10;
		b = b + n%10;
		n = n/10;
	}
	while (n1 != 0)
	{
		b1 = b1 *10;
		b1 = b1 + n1%10;
		n1 = n1/10;
	}
	while (n2 != 0)
	{
		b2 = b2 *10;
		b2 = b2 + n2%10;
		n2 = n2/10;
	}
	while (n3 != 0)
	{
		b3 = b3 *10;
		b3 = b3 + n3%10;
		n3 = n3/10;
	}
	while (n4 != 0)
	{
		b4 = b4 *10;
		b4 = b4 + n4%10;
		n4 = n4/10;
	}

	printf("5170984 %d\n",  b);
	printf("406567  %d\n",  b1);
	printf("368750  %d\n",  b2);
	printf("2369510 %d\n",  b3);
	printf("2183293 %d\n",  b4);
	return 0;
}
