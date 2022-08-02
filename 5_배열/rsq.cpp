/*
http://220.89.64.243/30stair/rsq/rsq.php?pname=rsq
n개의 수와
수열의 시작, 끝 지점이 주어질 때
구간의 합을 출력
*/

#include<stdio.h>

int main_rsq() {
	int i, j, n, q;
	int num[100000];
	num[0] = 0; // 배열 첫번째에 0 대입
	// 수열 입력
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
		num[i] += num[i - 1]; // 구간의 연속합을 더해서 대입
	}

	// 구간 수 및 구간 입력
	scanf("%d", &q);
	for (i = 0; i < q; i++) {
		int a, b; // 구간을 넣을 변수 및 합
		scanf("%d %d", &a, &b);
		// num[b] = 1부터 b까지의 구간합
		// num[a-1] = 1부터 a-1까지의 구간합
		printf("%d\n", num[b] - num[a - 1]); 
		
	}

	return 0;
}