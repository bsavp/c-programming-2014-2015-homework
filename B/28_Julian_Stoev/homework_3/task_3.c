#include <stdio.h>

int main() {
	int i, p1, p2, c;
	for (i=2;i<110;++i) {
		for (c=2;i%c!=0;++c) {}
		if (c==i) {
			p1=i;
			p2=p1+2;
			for (c=2;p2%c!=0;++c) {}
				if (c==p2) {
					printf("(%d, %d)\n", p1, p2);}}}
	return 0;
}
		
