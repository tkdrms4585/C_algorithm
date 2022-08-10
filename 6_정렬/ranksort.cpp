/*
http://220.89.64.243/30stair/rank_sort/rank_sort.php?pname=rank_sort
n명의 점수를 입력 받는다
입력된 순서대로 등수 출력
*/

#include<stdio.h>

int main_rank() {
	int a[1000];
	int rank[1000];
	int i, j, n;

	// 입력
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		rank[i] = 1; // 순위 초기화
	}

	// 순위 계산
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (a[i] < a[j])
				rank[i]++;
		}
	}

	// 순위 출력
	for (i = 0; i < n; i++) 
		printf("%d\n", rank[i]);

	return 0;
}