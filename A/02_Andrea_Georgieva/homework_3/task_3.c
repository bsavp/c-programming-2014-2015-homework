#include<stdio.h>
int main()
{
int a,b,c,d;
a=1;
b=1;
c=0;
d=0;
while (c<10)
{
d++;	
while (c!=d)
{
a++;
b=a+2;
if(a==3 || a==5)
{
c++;
printf("(%d, %d)\n",a,b);
}
else {
if (a%2!=0 && a%3!=0 && a%4!=0 && a%5!=0 && a%6!=0 && a%7!=0 && a%8!=0 && a%9!=0 && b%2!=0 && b%3!=0 && b%4!=0 && b%5!=0 && b%6!=0 && b%7!=0 && b%8!=0 && b%9!=0){
c++;
printf("(%d, %d)\n",a,b);
}
}
}
}
return 0;
}
