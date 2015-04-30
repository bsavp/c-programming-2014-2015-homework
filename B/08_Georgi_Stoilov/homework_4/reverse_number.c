#include <stdio.h>

int main()
{
	int count;
	long unsigned int number, original;
	
	for (count = 1; count <=5; count++)
	{
		switch (count)
		{
			case 1: 
				reverse_number(5170984);
				break;
			case 2: 		
				reverse_number(406567); 
				break;
			case 3: 
				reverse_number(368750); 
				break;
			case 4:
				reverse_number(2369510);
				break;
			case 5:
				reverse_number(2183293);
				break;
			break;
		}
		
	}
	return 0;
}

int reverse_number(int number)
{
int original, count;
int reverseNumber = 0;
	original = number;
	do
	{
		reverseNumber = reverseNumber*10 + number%10;
		number = number/10;
		if(number == 0)
		{
			printf("%d       %d\n",original, reverseNumber);
			break;
		}
	}
	while(number);

return reverseNumber;
}
