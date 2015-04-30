#include <stdio.h>

int do_reverse_number(unsigned long int number)
{
    int reverse_number = 0;
    while(number != 0)
    {
        reverse_number = reverse_number * 10;
        reverse_number = reverse_number + number % 10;
        number = number / 10;
    }
    return reverse_number;
}

int main()
{
    printf("5170984 %d\n", do_reverse_number(5170984));
    printf("406567  %d\n", do_reverse_number(406567));
    printf("368750  %d\n", do_reverse_number(368750));
    printf("2369510 %d\n", do_reverse_number(2369510));
    printf("2183293 %d\n", do_reverse_number(2183293));
    return 0;
}
