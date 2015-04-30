#include <stdio.h>
	
	int main(){
	
	int sum,j,k,i,m;
			k=0;
			sum=1;
		do  {
			i=10;
			j=i-k;
			sum=sum*j;
			k=k+1;		
		} while (k!=9);

		printf("%d\n",sum);

	return 0;


}
