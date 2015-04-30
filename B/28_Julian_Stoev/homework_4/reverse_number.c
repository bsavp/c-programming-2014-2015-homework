#include <stdio.h>

long unsigned int swap(long unsigned int fnum) {
	long unsigned int rev;
	rev=0;
	while (fnum>0) {		
		rev=rev*10+fnum%10;
		fnum=fnum/10;}
	return rev;
}
int main() {
	long unsigned int num;
	num=5170984;
	printf("%lu      %lu\n", num, swap(num));
	num=406567;
	printf("%lu       %lu\n", num, swap(num));
	num=368750;
	printf("%lu       %lu\n", num, swap(num));
	num=2369510;
	printf("%lu      %lu\n", num, swap(num));
	num=2183293;
	printf("%lu      %lu\n", num, swap(num));
	return 0;
}

