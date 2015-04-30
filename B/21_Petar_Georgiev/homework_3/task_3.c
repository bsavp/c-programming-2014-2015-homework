#include <stdio.h>

int main()
{
int a1,a2,b;
a1=3; a2=5;
printf("(%i, %i)\n" ,a1,a2);
a1=5; a2=7;
printf("(%i, %i)\n" ,a1,a2);

while(b<8){
a1++;
a2=a1+2;
if ((a1%2!=0)&&(a1%3!=0)&&(a1%5!=0)&&(a1%7!=0)&&(a1%9!=0)&&
    (a2%2!=0)&&(a2%3!=0)&&(a2%5!=0)&&(a2%7!=0)&&(a2%9!=0)){
b++;
printf("(%i, %i)\n" ,a1,a2);
}
}


return 0;
}
