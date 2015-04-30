#include <stdio.h>

void PrintSmallLetters()
{
	int i;
	for (i = 97; i <= 122; i += 1)
	{
		printf("%c - %d\n", i, i);
	}
}

void PrintBigLetters()
{
	int i;
	for (i = 65; i <= 90; i += 1)
	{
		printf("%c - %d\n", i, i);
	}
}

void PrintDigits()
{
	int i;
	for (i = 48; i <= 57; i += 1)
	{
		printf("%c - %d\n", i, i);
	}
}

int main()
{
	PrintSmallLetters();
	PrintBigLetters();
	PrintDigits();
	return 0;
}
