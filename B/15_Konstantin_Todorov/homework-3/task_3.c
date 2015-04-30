#include <stdio.h>
int main() {
int i;
int k;
int p;
i=2;
k=3;
printf("(%d,%d) \n",i,k);
//purvi 4ift;
i=5;
k=7;
printf("(%d, %d) \n",i,k);
//vtori 4ift;
p=0;
do {
i=i+1;
k=i+2;
if((i%2!=0)&&(i%3!=0)&&(i%4!=0)&&(i%5!=0)&&(i%6!=0)&&(i%7!=0)&&
   (i%8!=0)&&(i%9!=0)&&(k%2!=0)&&(k%3!=0)&&(k%4!=0)&&(k%5!=0)&&
   (k%6!=0)&&(k%7!=0)&&(k%8!=0)&&(k%9!=0)){ printf("(%d, %d) \n",i,k);
p=p+1;}
                                                                   
    }while (p<=10);
return(0);
}
