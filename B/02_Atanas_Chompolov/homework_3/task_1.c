#include <stdio.h>

int main() {
		
	char chSmall, chCaps, number;

	for (chSmall = 97; chSmall <= 122; chSmall++)
	{
		printf("%c = %d\n",chSmall,chSmall);
	}
	
		printf("\n");

	for (chCaps = 65; chCaps <= 90; chCaps++)
	{
		printf("%c = %d\n",chCaps,chCaps);
	}

		printf("\n");

	for (number = 48; number <= 57; number++)
	{
		printf("%c = %d\n",number,number);
	}
	
	return 0;
}
