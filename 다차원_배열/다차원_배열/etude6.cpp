/* 2차원 배열 연습 문제 6.
  1  2  4  7 11
  3  5  8 12 16
  6  9 13 17 20
 10 14 18 21 23
 15 19 22 24 25
 
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_etude6() {
	int c[5][5] = { 0, };
	int spin, i, j, k, cnt = 1;
	int x = 0, y = 0;
	// 배열에 값을 넣는 코드
	for (spin = 0; spin < 10; spin++) {
		for (i = 0; i < 5; i++) {
			j = spin - i;

			if (j >= 0 && j < 5)
				c[i][j] = cnt++;
		}
	}

	// 배열을 출력하는 코드
	for (i = 0; i <= 4; i++) {
		for (j = 0; j <= 4; j++) {
			if (c[i][j] != 0)
				printf("%3d", c[i][j]);
			else
				printf("   ");
		}
		printf("\n");
	}
	return 0;
}