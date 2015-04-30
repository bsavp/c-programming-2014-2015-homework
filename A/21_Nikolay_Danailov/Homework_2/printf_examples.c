#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int charCount = rand() % 10 + 1;
	int i;

	for(i = 0; i < charCount; i++)
	{	
		printf("Char %d: %c\n", i + 1, rand(1, 255));
	}

	return 0;
}
