/* 2���� �迭 ���� ���� 4.
			  1
		   3  2
		6  5  4
	10  9  8  7
 15 14 13 12 11
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_etude4() {
	int c[5][5] = { 0, };
	int i, j, cnt = 1, k = n - 1;

	// �迭�� ���� �ִ� �ڵ�
	for (i = 0; i <= 4; i++) {
		for (j = 4; j >= 0 + k; j--) {
			c[i][j] = cnt++;
		}
		k--;
	}

	// �迭�� ����ϴ� �ڵ�
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