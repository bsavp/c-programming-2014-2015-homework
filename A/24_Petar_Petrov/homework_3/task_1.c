#include<stdio.h>
int main() 
{
   char str = 'a';
   while(str>='a' && str<='z') 
   {
       printf("%c - %d\n",str,str);
       str ++;
   }
   str = 'A';
   printf("\n");
   while(str>='A' && str<='Z')
   {
       printf("%c - %d\n",str,str);
       str ++;
   }
   str = '1';
   printf("\n");
   while(str>='1' && str<='9')
   {
       printf("%c - %d\n",str,str);
       str ++;
   }
   return 0;  
}
