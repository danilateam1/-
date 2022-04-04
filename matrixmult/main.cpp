#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand(time(NULL));
	int a[5][4] = { 0 };
	int b[4][3] = { 0 };
	int c[5][3] = { 0 };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			a[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			b[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d  ", a[i][j]);
			if (j == 3) {
				printf(" \n ");
			};
		}
	}


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d  ", b[i][j]);
			if (j == 2) {
				printf(" \n ");
			};
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d  ", c[i][j]);
			if (j == 2) {
				printf(" \n ");
			};
		}
	}

	return 0;
}