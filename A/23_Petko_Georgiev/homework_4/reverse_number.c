#include<stdio.h>
void DrawReversed(int Number)
{
	printf("%d\t",Number);
	do{ printf("%d",Number%10); Number/=10; }while(Number!=0);
	printf("\n");
}
int main()
{
	DrawReversed(5170984);
	DrawReversed( 406567);
	DrawReversed( 368750);
	DrawReversed(2369510);
	DrawReversed(2183293);
	return 0;
}

