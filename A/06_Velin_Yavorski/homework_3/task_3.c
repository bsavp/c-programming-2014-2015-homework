#include<stdio.h>

int main()
{
	int p1,p2,i,n;
	p1=1;
	p2=1;
	i=0;
	n=0;
	while (i<10)
	{
		n++;	
		while (i!=n)
		{
		p1++;
		p2=p1+2;
		if(p1==3 || p1==5) 
		{
			i++;
			printf("(%d, %d)\n",p1,p2);
		}
		
		else {
		if (p1%2!=0 && p1%3!=0 && p1%4!=0 && p1%5!=0 && p1%6!=0 && p1%7!=0 && p1%8!=0 && p1%9!=0 && p2%2!=0 && p2%3!=0 && p2%4!=0 && p2%5!=0 && p2%6!=0 && p2%7!=0 && p2%8!=0 && p2%9!=0){
		
			i++;
			printf("(%d, %d)\n",p1,p2);
		}
		}
		}
	}
return 0;
}
