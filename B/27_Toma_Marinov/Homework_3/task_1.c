#include <stdio.h>

int main()
{
	char x;
	char y;
	int z;
	for (x='A'; x<='Z'; x++){
	printf("%c - %d\n", x, x);
	}
	for (y='a'; y<='z'; y++){
	printf("%c - %d\n", y, y);
	}
	for (z=0; z<10; z++){
	printf("%d\n", z);
	}
	return 0;
}
