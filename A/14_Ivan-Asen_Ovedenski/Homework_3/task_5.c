#include <stdio.h>
int main() {
	int num = 1;
	while(num < 30000){
		if (num %3==0 && num % 7==0){
		 printf("%d\n",num);
		}
		num++;
	} 
	return 0 ;
}
