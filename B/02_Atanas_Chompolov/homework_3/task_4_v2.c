#include <stdio.h>

int main()
{
	int number, count;
	long unsigned int factorial;

	factorial = 1;	
         
	start:
    	printf("Enter a number: ");
    	scanf("%d",&number);
    	if ( number < 0)
	{
        	printf("Factorial of negative number doesn't exist.\n");
		goto start;
	}
    	else
    	{
       			for(count=1; count <= number; count++)    
       			{
        		factorial*=count;              
       			}
    		printf("Factorial of %d = %lu\n",number, factorial);
    	}
    return 0;
}
