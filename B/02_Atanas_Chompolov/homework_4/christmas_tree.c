#include <stdio.h>

void christmas_tree(int height) {
	int count,x,z,last,chs;
		
	last = 1;
	chs = 1;

 	for(count=2; count <= height; count++)
	{
 		last = last + 2;
 	}

 	int spaces = last / 2;
	
 	for(count = 1; count <= height; count++)
 	{
 		for(x = 1; x <= spaces; x++)
 		{
 			printf(" ");
 		}	
 		for(z = 1; z <= chs; z++)
 		{
 			printf("*");
 		}

		chs = chs + 2;
 		spaces = spaces -1;
 		printf("\n");
 	}
}

int main() {
	christmas_tree(4);
	christmas_tree(7);
	christmas_tree(11);
	
	return 0;
}
