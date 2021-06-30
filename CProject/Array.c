#include<stdio.h>

int main(void) {
	int score[5][6];
	int i, j;
	for (i = 0; i < 5; i++) {
		printf("ÇÐ¹Ý:"); scanf_s("%d", &score[i][0]);
		printf("C:"); scanf_s("%d", &score[i][1]);
		printf("JAVA:"); scanf_s("%d", &score[i][2]);
		printf("Python:"); scanf_s("%d", &score[i][3]);
		score[i][4] = score[i][1] + score[i][2] + score[i][3];
		score[i][5] = score[i][4] / 3;
	}
	printf("\tÇÐ¹ø\tJAVA\tPython\tÃÑÁ¡\tÆò±Õ\n");

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			printf("\t%d", score[i][j]);
		}

		printf("\n");
	}

	
	return 0;
}