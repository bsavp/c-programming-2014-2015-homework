#include <stdio.h>
int main(){
	int number;
	int res=0;
	scanf("%d",&number);
	while(number!=0){
		res=(res*10);
		res=res+number%10;
		number=number/10;
	}
	printf("%d\n",res);



return 0;
}
