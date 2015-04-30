#include <stdio.h>
int main() {
int j;
char a;
for (j=99;j<125;j++)
{
a=j;
printf("%c",a);
printf("-");
printf("%d\n",j);

}

for(j=50;j<60;j++)
{
a=j;
printf("%d\n",j);
}

for(j=48;j <= 57;j++)
{
a=j;
printf("%c - %d",a,a);
}

return 0;
}
