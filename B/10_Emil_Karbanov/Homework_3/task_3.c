#include <stdio.h>

	int main(){
	int frst; // ms.Prime
	int secd; // ms.Prime's twin
	int i;
		frst=3; secd=5;
		printf("(%d, %d)\n" ,frst,secd);
		frst=5; secd=7;
		printf("(%d, %d)\n" ,frst,secd);

	while(i<8){
	frst++;
	secd=frst+2;
		if ((frst%2!=0)&&(frst%3!=0)&&(frst%5!=0)&&(frst%7!=0)&&
    		(secd%2!=0)&&(secd%3!=0)&&(secd%5!=0)&&(secd%7!=0)){
		i++;
		printf("(%d, %d)\n" ,frst,secd);
}
}




return 0;
}
