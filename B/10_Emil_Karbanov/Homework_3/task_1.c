#include<stdio.h>

int main () {
	char atoz; // simvol
	int  atoznum; // number from ascii

for(atoz = 97 ; atoz <= 122; atoz++) {
	atoznum = atoz ;
	printf("%c - %d\n", atoz, atoznum) ;
	if(atoz == 122) {
	atoz = 64 ;
		}else {
			if(atoz == 90) {  
			atoz = 48 ;
			}else{
				if(atoz == 57) {
				break;
}
}
}
}
return 0;
}
