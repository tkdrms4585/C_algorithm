/*
http://220.89.64.243/30stair/distinct/distinct.php?pname=distinct
n 개의 수를 입력 받아 서로 다른 수의 개수를 출력
중복수 제거 버전
공간은 절약하지만 시간은 낭비하는 버전
*/

#include<stdio.h>

int main_distinct() {
	int i, j, n, cnt = 0, a[1010];
	// 입력
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	// 중복수 제거
	// a[i] 와 a[j] 가 같으면 j에 0 대입
	// a[i] 가 0이면 굳이 비교 할 필요가 없음
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] == 0) break;
			if (a[i] == a[j])
				a[j] = 0;
		}
	}
	// 숫자 개수 파악
	for (i = 0; i < n; i++) {
		if (a[i] != 0)
			cnt++;
	}
	// 출력
	printf("%d", cnt);

	return 0;
}