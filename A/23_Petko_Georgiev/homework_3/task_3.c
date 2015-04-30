#include<stdio.h>
int prime(int n)
{
	int a=2; while(a<n) { if(n%a==0) return 0; a++; }
	return 1;
}
int main()
{
	int a,b=3,i=0;
	while(i<10)
	{
		do
		{
			a=b;
			b=a+1; while(!prime(b)) {b++;}
		}
		while( b-a!=2 );
		printf("(%d, %d)\n",a,b);
		i++;
	}
	return 0;
}
