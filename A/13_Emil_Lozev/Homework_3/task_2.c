#include<stdio.h>
 
int main(){
  long long unsigned int l1,l2,r;
  int i;
  l1 = 2;
  l2 = 1;
	printf("%lli, ", l1);
	printf("%lli,", l2); 
 for(i = 2; i <= 100; i++){
  r = l1 + l2;
  printf("%lli, ", r);
  l1 = l2;
  l2 = r;
 }
 return 0;
}
