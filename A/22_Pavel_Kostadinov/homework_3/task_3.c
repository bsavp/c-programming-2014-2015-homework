#include <stdio.h>
int main()
{
int broqch,a,b,j,f,t,tf;
broqch=0;
a=2;
f=0;
while(broqch<10)
 {
 while(f==0)
 {
 a++;
 t=1;
 for(j=1;j<a;j++)
 { if(a%j<0 || a%j>0) t=0; }
 if(t=1) f=1;
 }
 b= a+2;
 tf=1;
 for(j=1;j<b;j++) {if(b%j<0 || b%j>0) tf=0;}
 if(tf=1)
 {
 printf("%d - %d\n",a,b);
 broqch++;
 a++;
 }
 }
return 0;
}
