#include <stdio.h>

void christmas_tree(int height)
{
    int i, j, p;
    int last = 1;
    int chars = 1;
    for(i=2; i<= height; i++)
    {
        last = last + 2;
    }

    int spaces = last / 2;
    for(i=1; i<=height; i++)
    {
        for(j=1; j<=spaces; j++)
        {
            printf(" ");
        }

        for(p=1; p<=chars; p++)
        {
            printf("*");
        }

        chars = chars + 2;
        spaces = spaces -1;
        printf("\n");
    }
}

int main()
{
    christmas_tree(4);
    christmas_tree(7);
    christmas_tree(11);
    return 0;
}
