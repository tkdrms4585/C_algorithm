/* 2���� �迭 ���� ���� 2.
 1  2  3  4  5
    6  7  8  9
      10 11 12
         13 14
            15
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_etude2() {
	int b[5][5] = {0,};
	int i, j, cnt = 1, k = 0;

	// �迭�� ���� �ִ� �ڵ�
	for (i = 0; i <= 4; i++) {
		for (j = i; j <= 4; j++) {
			b[i][j] = cnt++;
		}
	}

	// �迭�� ����ϴ� �ڵ�
	for (i = 0; i <= 4; i++) {
		for (j = 0; j <= 4; j++) {
			if (b[i][j] != 0)
				printf("%3d", b[i][j]);
			else
				printf("   ");
		}
		printf("\n");
	}
	return 0;
}