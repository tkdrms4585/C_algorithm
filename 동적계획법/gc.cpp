
#include<stdio.h>

int main_gc() {
	int i, j, n;
	int dp[20] = { 1, 1 };

	// �Է�
	scanf("%d", &n);

	// ���
	for (i = 2; i <= n; i++) {
		for (j = 0; j < i; j++) {
			dp[i] += dp[j] * dp[i - 1 - j];
		}
	}

	printf("%d", dp[n]);

	return 0;
}