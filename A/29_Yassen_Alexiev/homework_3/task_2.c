#include<stdio.h>

int main() {

    int unsigned long num1=2;
    int unsigned long  num2=1;
    int unsigned long num3;
    int a=1;
    printf("%lu, %lu, ", num1, num2);
    for(a=1; a<=97; a++)
    {
        num3= num1 + num2;
        printf("%lu, ",thirdNumber);
        num1 = num2;
        num2 = num3;
    }
    num3 = num1+ num2;
    printf("%lu\n",num3);
    return 0;
}
