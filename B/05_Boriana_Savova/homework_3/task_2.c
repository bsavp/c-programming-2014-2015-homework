#include <stdio.h>
int main (){
long unsigned int a,b,c;
a=2;
b=1;
int i;
printf("%lu, %lu,", a, b);
for(i=2; i<=100; i++){
	c=b;
	b=b+a;
	a=c;
printf(", %lu", b);
}

return 0;
}
