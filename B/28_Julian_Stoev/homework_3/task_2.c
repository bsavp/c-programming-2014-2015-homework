#include <stdio.h>

int main() {	
	long unsigned l, f, s;
	int counter;
	for (counter=0; counter<=100; ++counter){
	if (counter==0) {
		f=2;
		printf(" %lu,",f);}
	else  if (counter==1) {
		s=1;
		printf(" %lu,", s);}
	else {
		l=f+s;
		f=s;
		s=l;
		printf(" %lu,", l);}}
	return 0;
}
