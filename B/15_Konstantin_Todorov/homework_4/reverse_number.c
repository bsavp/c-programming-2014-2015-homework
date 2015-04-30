#include <stdio.h>

int main(){

int n;
int r=0;
scanf("%d",&n);
while(n!=0)
    {
    r=r*10;
    r=r+n%10;
    n=n/10;    
    }
printf("obratnoto 4islo e = %d",r);
return 0;
}
