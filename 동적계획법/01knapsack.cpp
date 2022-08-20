#include<stdio.h>
#include<algorithm>

#define M 191
using namespace std;

int w[M], v[M], dp[M][M * M], n, s, , dab, k;

int main() {
	int i, j;
	scanf("%d%d", &n, &s);
	for (i = 0; i < s; i++) {
		scanf("%d %d", &w[i], &v[i]);
	}
	for (i = w[0]; i <= n; i++) {
		dp[0][i] = v[0];
	}
	for (i = 1; i < s; i++){
		for (j = 0; j <= n; j++) {
			dp[i][j] = dp[i - 1][j];
			if (j >= w[i]) dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + [v[i]]);
		}
	}

	return 0;
}