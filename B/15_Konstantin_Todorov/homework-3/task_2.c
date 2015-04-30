#include <stdio.h>
int main(){

long unsigned i=2;
long unsigned k=1;
int b=1;
long unsigned p=0;//next
do{ p=i+k;
    i=k;
    k=p;
    b=b+1;
    printf("%lu,",p);} while (b<=100);
return(0);
}
