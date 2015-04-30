#include <stdio.h>

	int main () {
		int num = 65 ;
		int num2 ,num3 ;
		num2 = 97;
		num3 = 48;
		printf("Caps\n");
 		while (num < 91) {
			printf("%c-%d\n", num,num);
			num = num + 1 ;			
		} printf("Small\n");
		while (num2 < 123) {
			printf("%c-%d\n", num2,num2);
			num2 = num2 + 1 ;
			
		} printf("Numbers\n");
		while (num3 < 58) {
			printf("%c-%d\n", num3,num3);
			num3 = num3 + 1 ;	
		}
	return 0 ;
 }
