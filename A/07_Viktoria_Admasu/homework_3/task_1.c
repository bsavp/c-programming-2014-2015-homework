#include <stdio.h>
int main()
{
char symbol;

symbol='a';
while (symbol <= 'z'){
printf ("%c - %d\n",symbol,symbol);
symbol++;
}

symbol='A';
while (symbol <= 'Z'){
printf ("%c - %d\n",symbol,symbol);
symbol++;
}

symbol='0';
while (symbol <= '9'){
printf ("%c - %d\n",symbol,symbol);
symbol++;
}

return 0;
}
