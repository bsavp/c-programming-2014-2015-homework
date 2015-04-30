#include <stdio.h>

void printTree(int heightTree){

	int space; // air pockets
	int star = 1; //contents of tree
	int i,j; //counters

	space = heightTree-1;

	for(j=1; j<=heightTree;j++){

		for(i=space; i>0; i--){
			printf(" ");
		};

		for(i=1;i<=star;i++){
			printf("*");
		};

		printf("\n");

		space-=1;
		star+=2;
	};

};

int main(){

	int height; //height of tree

	height = 4;
	printTree(height);

	height = 7;
	printTree(height);

	height = 11;
	printTree(height);

	return 0;
}