#include <stdio.h>

int main() {
	char bukvi='a';
	char bukvi1='A';
	int cifri='0';
	
	for(bukvi1='A';bukvi1<='Z';bukvi1+=1){
	printf("%c = %d\n",bukvi1,bukvi1);
	}
	printf("\n");
	for(bukvi='a';bukvi<='z';bukvi+=1){
	printf("%c = %d\n",bukvi,bukvi);
	}
	printf("\n");
	for(cifri='0';cifri<='9';cifri+=1){
	printf("%c = %d\n",cifri,cifri);
	}
	printf("\n");
	return 0;

}
