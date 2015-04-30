#include <stdio.h>

int main()
{
char ch;
int i;
	ch=96;
	for(i=97;i<=122;i++)
	{	
		ch++;
		printf("%c - %d\n",ch,i);	
	}
	ch=64;
	for(i=65;i<=90;i++){
		ch++;
		printf("%c - %d\n",ch,i);
	}
	ch=47;
	for(i=48;i<=57;i++)
	{
		ch++;
		printf("%c - %d\n",ch,i);
	}
return 0;
}
