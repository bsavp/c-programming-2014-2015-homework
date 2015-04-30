#include <stdio.h>

int main()
{
int a,b;
a=0;
while(a<30000){
a++;
if (a%3==0){
if (a%7==0){
if (a%2!=0){printf(" %i \n" ,a);}
}
}

}

return 0;
}
