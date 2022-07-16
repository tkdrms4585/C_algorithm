/* 2차원 배열 연습 문제 5.
		1
	 2  3  4
  5  6  7  8  9 
    10 11 12
	   13
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_etude4() {
	int c[5][5] = { 0, };
	int i, j, cnt = 1, k = 4;
	int x = 0, y = 2;
	// 배열에 값을 넣는 코드
	for (i = 0; i <= 4; i++) {
		for (j = 0; j <= 4; j++) {
			c[x][y] = cnt++;
			if (i < 2)
				x++, y++;
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