#include <stdio.h>
int main(){
int array[10]={4, 6, 12, 18, 30, 42, 60, 72, 102, 108};
int i=0;
for(i=0; i<10; i++){
	printf("(%d, %d)\n", array[i]-1, array[i]+1);
}

return 0;
}
