include<stdio.h>

int main()
{
    int a=0;
    int val= 1;
    for(a=1;a<=10;a++)
    {
        val = val * a;
    }
    printf("%d\n",val);
    return 0;
}
