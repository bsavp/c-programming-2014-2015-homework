#include <stdio.h>

int magiic(int square[999][999], int size) {
	int i, count, sum = 0, sum2 = 0;
	
	for (i = 0; i < size; i++) {
		sum += square[0][i];
	}
	
	for (i = 1; i < size; i++) {
		for (count = 0; count < size; count++)
			sum2 += square[i][count];
		if (sum2 != sum)
				return 0;
		sum2 = 0;
	}
	
	for (i = 0; i < size; i++) {
		for (count = 0; count < size; count++)
			sum2 += square[count][i];
		if (sum2 != sum)
			return 0;
		sum2 = 0;
	}

	for (i = 0; i < size; i++) {
		sum2 += square[i][i];
	}
	if (sum2 != sum)
		return 0;
	sum2 = 0;

	for (i = size; i > 0; i--) {
		for (count = 0; count < size; count++)
			sum2 += square[i-1][count];
		if (sum2 != sum)
				return 0;
		sum2 = 0;
	}	

	return 1;
}

int main() {
	int i, count, size;

	do {
		scanf("%d", &size);
	} while (size < 3 || size > 999);

	int square[999][999];
	for (i = 0; i < size; i++) {
		for (count = 0; count < size; count++) {
			scanf("%d", square[i][count]);	
		}
	}
	
	if (magiic(square, size) == 0)
		printf("NO MAGIC\n");
	else
		printf("MAGIC\n");

	return 0;
}
