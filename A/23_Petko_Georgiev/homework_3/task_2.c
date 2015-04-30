#include<stdio.h>

int S_ADD( char a[] , int a_sz , char b[] , int b_sz )
{
	int i=1,n=0;
	if( a_sz<b_sz )
	{
		while(i<=b_sz)
		{
			if( a_sz-i>=0 ) a[b_sz-i] = a[a_sz-i];
			else a[b_sz-i]='0';
			i++;
		}
		a_sz=b_sz;
	}
	i=1;while(i<=a_sz&&i<=b_sz)
	{
		a[a_sz-i]+=b[b_sz-i]+n-'0';
		n=0; if( a[a_sz-i]>'9' ) { n=1; a[a_sz-i]-=10; }
		i++;
	}
	if(n!=0)
	{
		i=0;
		while(i<a_sz)
		{
			a[a_sz-i]=a[a_sz-i-1];
			i++;
		}
		a[0]='0'+n; a_sz++;
	}
	a[a_sz]=0;
	return a_sz;
}

int main()
{
	char a[100]={'2',0},b[100]={'1',0};
	int as=1,bs=1,i=2,q=0;
	printf("%s",a);
	printf(", %s",b);
	while(i<100)
	{
		if(q==0)
		{
			as=S_ADD(a,as,b,bs);
			printf(", %s",a);
			q=1;
		}
		else
		{
			bs=S_ADD(b,bs,a,as);
			printf(", %s",b);
			q=0;
		}
		i++;
	}
	return 0;
}
