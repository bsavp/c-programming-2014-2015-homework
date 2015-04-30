#include <stdio.h>
int main(){

int i; //broi redove
int x=0; //random broq4
int s; //broi spaceove
int z=1; //broi zvezdi4ki
char p;//space
char k;//zvezda
printf("vuvedi broi redove");
scanf("%d",&i);
s=i;
while(x<=i)
    {
    p=' ';
    k='*';
    printf("%c%c \n",p,k);
    s=s-1;
    z=z+1;
    x=x+1;
    }
return 0;
}
