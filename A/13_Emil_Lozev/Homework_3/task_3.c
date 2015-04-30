#include<stdio.h>
int main()
{
int fp,sp,i,n;
i = 0;
n = 0;
fp = 1;
sp = 1;
 while (i<10){
   n++;	
   while (i!=n){
  fp++;
   sp= fp + 2;
    if(fp == 3 || fp == 5){  
     i++;
   printf("(%d , %d)\n",fp,sp);
  }
     else {
if (fp%2!=0 && fp%3!=0 && fp%4!=0 && fp%5!=0 && fp%6!=0 && fp%7!=0 && fp%8!=0 && fp%9!=0 && sp%2!=0 && sp%3!=0 && sp%4!=0 && sp%5!=0 && sp%6!=0 && sp%7!=0 && sp%8!=0 && sp%9!=0){
   i++;
    printf("(%d, %d)\n",fp,sp);
}
}
}
}
return 0;
}
