#include<stdio.h>
void PrintTree( int Height )
{
	int i,q;
	q=0; while(q<Height)
	{
		i=0; while(i<Height-q) { printf(" "); i++; }
		i=0; do{ printf("*"); i++; }while(i<q*2+1);
		printf("\n");
		q++;
	}
}
int main()
{
	PrintTree(4);
	PrintTree(7);
	PrintTree(11);
	return 0;
}

