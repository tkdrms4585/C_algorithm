

#include<stdio.h>

int main_scv() {
	int map[110][110] = {0,};
	int i, j, n;

	// �Է�
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	// ���
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			map[i][j] += map[i - 1][j] > map[i][j - 1] ? map[i - 1][j] : map[i][j - 1];
		}
	}

	// ���
	printf("%d", map[n][n]);

	return 0;
}