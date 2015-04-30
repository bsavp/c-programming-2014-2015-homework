#include <stdio.h>
int reversenum(long long num)
{
long long a,reverse,add;
int mod,i,j;
a=num;
i=0;
while(a>0)
	{
	a=a/10;
	i++;
	}
a=num;
reverse=0;
while(a>0)
	{
	mod=a%10;
	a=a/10;
	add=mod;
	for(j=1;j<i;j++)
		{
		add=add*10;
		}
	reverse=reverse+add;
	i=i-1;
	}

return reverse;
}
int main()
{
printf("5170984 %d\n", reversenum(5170984));
printf("406567 %d\n", reversenum(406567));
printf("368750 %d\n", reversenum(368750));
printf("2369510 %d\n", reversenum(2369510));
printf("2183293 %d\n", reversenum(2183293));
return 0;
}
