#include <stdio.h>

void Christmas_Tree(int frows) {
	int count1, count2;
	for (count1=1; count1<=frows; count1++) {
		for (count2=frows; count2>=count1; count2--) {
			printf(" ");}
		for (count2=1; count2<=count1; count2++) {
			printf("*");}
		for (count2=1; count2<count1; count2++) {
			printf("*");}
		printf("\n");}
	return ;
}

int main() {
	int rows;
	rows=4;
	Christmas_Tree(rows);
	rows=7;
	Christmas_Tree(rows);
	rows=11;
	Christmas_Tree(rows);
	return 0;
}
