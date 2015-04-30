#include <stdio.h>
int main()
{
	int rev=0, num;
	printf("Enter a number:\n");
	scanf("%d", &num);
	while(num!=0)
	{
		rev=rev * 10;
		rev=rev + num%10;
		num=num/10;
	}
	printf("The reverse of the entered number is: %d\n", rev);
	return 0;
}
