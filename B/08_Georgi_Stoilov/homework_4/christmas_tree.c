#include <stdio.h>

int main()
{
	int count;
	for (count = 1; count <= 11; count++)
	{
		switch(count)
		{
			case 4:
				tree(4);
				break;
			case 7:
				tree(7);
				break;
			case 11:
				tree(11);
				break;
			break;
		}
	}
return 0;
}


int tree(int rows)
{
	int i, space, k = 0;
	for(i = 1; i <= rows; i++)
		{
			for(space = 1; space <= rows - i; space++)
			{
				printf(" ");
			}
			do
			{
				printf("*");
				k++;
			}	
			while(k < 2*i - 1);
			k = 0;
			printf("\n");
		}
}	

