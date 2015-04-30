#include<stdio.h>

int main()
{
    int unsigned long c1 = 2;
    int unsigned long c2 = 1;
    int unsigned long c3;
    int i = 1;
    printf("%lu, %lu, ", c1, c2);
    for(i=1; i<=97; i++)
    {
        c3 = c1 + c2;
        printf("%lu, ", c3);
        c1 = c2;
        c2 = c3;
    }
    c3 = c1 + c2;
    printf("%lu\n", c3);
    return 0;
}

