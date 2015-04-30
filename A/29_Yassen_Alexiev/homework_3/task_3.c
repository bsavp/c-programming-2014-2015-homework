#include <stdio.h>

int PrimeCheck(int num) {
    int a=1;
    while(a<=num) {
        if (num%i==0) {
            if(!((a==1) || (a==num))) {
                return 0;
            }
        }
        a++;
    }
    return 1;
}

int main()
{
    int num1= 3;
    int num2= 5;
    int i;
    int full1= 0;
    int full2= 0;
    int stopped = 5;
    int twin = 1;
    printf("(%d, %d)\n", num1, num2);
    for(twin=1; twin<=9; twin++)
    {
        a= stopped;
        while(i<=99999)
        {
            if((PrimeCheck(a)==1)&& (full1==0))
            {
                num1= a;
                full1= 1;
            }
            else if ((PrimeCheck(a)==1)&&(full1==1))
            {
                num2=a;
                full2= 1;
            }

            if((full1==1)&&(full2==1))
            {
                printf("(%d, %d)\n", num1, num2);
                full1= 0;
                full2= 0;
                stopped =num2 + 1;
                break;
            }
            a++;
        }
    }

    return 0;
}
