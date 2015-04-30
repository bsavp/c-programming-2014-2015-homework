#include <stdio.h>
int main(){
	int passlines;
	int lines;
	int res=1;
	int pasres;
	char star='*';
	int x;
	int pasx;
	scanf("%d",&lines);
	x=2*lines;
	for(passlines=1;passlines<=lines;passlines++){
		for(pasres=1;pasres<=res;pasres++){
			if(pasres==1){
				for(pasx=1;pasx<=x;pasx++){
					printf(" ");			
				}
			}
			printf("%c",star);
		}
		x=x-1;
		res=res+2;
		printf("\n");
	}
	


return 0;
}
