#include <stdio.h>
int main(){
	int i,n;
	i = 0;
	do
	{
		if (i%2!=0 && i%3==0 && i%7==0)
		printf("%d\n",i);
	i++;
	} while (i<=30000);
}
