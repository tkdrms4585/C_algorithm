#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define M 5
int B[5][5];
int i, j;

int main() {
	//입력
	int cnt = 0;
	for (i = 0; i < 5; i++) {
		for (j = 4; j >= 4-i; j--) {
			B[i][j] = ++cnt;
		}
	}

	//출력
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (B[i][j] == 0) {
				printf("   ");
			}else
				printf("%3d", B[i][j]);
		}
		printf("\n");
	}

	return 0;
}