#include <stdio.h>

int main(){
	int try=0;
	for(try=0;try<30000;try++) {
	if (try%2!=0){
	if (try%3==0){
	if (try%7==0){
	printf("%i \n", try);
}
}
}
}
return 0;
}
