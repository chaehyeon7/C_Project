#include<stdio.h>

int main(void) {
	int score[5][6];  
	int score2[5][6] = { {1201,90,95,91},{77,100,86},{203,95,70,60} };
	int i, j;



	for (i = 0; i < 5; i++) {
		printf("학반:"); scanf_s("%d", &score[i][0]);
		printf("C:"); scanf_s("%d", &score[i][1]);
		printf("JAVA:"); scanf_s("%d", &score[i][2]);
		printf("Python:"); scanf_s("%d", &score[i][3]);
		score[i][4] = score[i][1] + score[i][2] + score[i][3];
		score[i][5] = score[i][4] / 3;
		score2[i][4] = score2[i][1] + score2[i][2] + score2[i][3];
		score2[i][5] = score2[i][4] / 3;

	}

	printf("1학년1반의성적표\n");
	printf("\t학번\tC\tJAVA\tPython\t총점\t평균\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			printf("\t%d", score[i][j]);
		}
		printf("\n");
	}
	printf("\n\n2학년2반성적표\n");
	printf("\t학번\tC\tJAVA\tPython\t총점\t평균\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 6; j++) {
			printf("\t%d", score2[i][j]);
		}
		printf("\n");
	}

	return 0;
}