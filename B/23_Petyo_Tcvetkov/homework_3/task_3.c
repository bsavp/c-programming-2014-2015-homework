#include <stdio.h>

int main()
{
	int num1=3,num2=5,i=1;
	printf("(%i, %i)\n" ,num1,num2);
	num1=5;
	num2=7;
	printf("(%i, %i)\n" ,num1,num2);
	while(i<9){
	num1++;
	num2=num1+2;
	if ((num1%2!=0)&&(num1%3!=0)&&(num1%5!=0)&&(num1%7!=0)&&
	    (num2%2!=0)&&(num2%3!=0)&&(num2%5!=0)&&(num2%7!=0))
	{
	i++;
	printf("(%i, %i)\n" ,num1,num2);
	}
	}


	return 0;
}