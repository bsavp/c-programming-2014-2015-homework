#include<stdio.h>

int main() {
    int a = 0;
    for(a = 0;a<=30000;a++) {
        if((a%2==1)&&(a%3==0)&&(a%7==0)) {
            printf("%d\n",a);
        }
    }
    return 0; 
}
