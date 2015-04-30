#include <stdio.h>

void nacepin(float x_posit, float y_posit, float *x_coord, float *y_coord, int barrels) {
	int muscle_mass = 1, i;
	float x_vector, y_vector;
	for (i = 0; i < barrels; i++) {
		x_vector = x_coord[i] - x_posit;
		y_vector = y_coord[i] - y_posit;
		x_vector += x_vector/muscle_mass;
		y_vector += y_vector/muscle_mass;
		printf("%.2f %.2f\n", x_vector, y_vector);
		x_posit += x_vector;
		y_posit += y_vector;
		muscle_mass *= 2;
	}
	printf("%.2f %.2f\n", x_posit, y_posit);
}

int main() {
	int barrels, i;
	float x_posit, y_posit, x_coord[1000], y_coord[1000];
	scanf("%d", &barrels);
	scanf("%f", &x_posit);
	scanf("%f", &y_posit);
	for (i = 0; i < barrels; i++) {
		scanf("%f", &x_coord[i]);
		scanf("%f", &y_coord[i]);
	}
	nacepin(x_posit, y_posit, x_coord, y_coord, barrels);
	return 0;
}
