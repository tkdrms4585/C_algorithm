/* 2���� �迭 ���� ���� 3.
 15 14 13 12 11
    10  9  8  7
        6  5  4
		   3  2
		      1
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_etude3() {
	int c[5][5] = {0,};
	int i, j, cnt = 1, k = 0;

	// �迭�� ���� �ִ� �ڵ�
	for (i = 4; i >= 0; i--) {
		for (j = 4; j >= 0+i; j--) {
			c[i][j] = cnt++;
		}
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