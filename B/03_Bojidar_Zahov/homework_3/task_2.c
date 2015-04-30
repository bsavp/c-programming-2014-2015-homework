#include <stdio.h>
int main ()
{
	long long int a=2;
	long long int b=1;
	long long int c;
	int i;
        //int z;
	//printf("%lld(0)",a);
	printf("%lld",a);
	//z = 1;
	printf(", %lld",b);
	//printf(", %lld(1)",b);
	for (i = 2; i < 100; i ++){
		//z = z + 1;
 		c = a + b;
		printf(", %lld",c);
		//printf(", %lld(%d)",c,z);
		a = b;
		b = c;}
	return 0;
}
