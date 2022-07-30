/*
http://220.89.64.243/30stair/distinct/distinct.php?pname=distinct
n 개의 수를 입력 받아 서로 다른 수의 개수를 출력
입력 받은 숫자를 배열에 넣는 버전
시간은 절약 하지만 공간은 낭비하는 버전
*/

#include<stdio.h>

int main_distinct2() {
	int i, n, m, cnt = 0, a[10001], max = 0;
	// 입력
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		a[m] = 1; // 입력받은 수의 배열 번호에 1 대입
		if (m > max)
			max = m; // 무의미한 반복을 배제하기 위한 최대 값 기록
	}
	// 1이 대입된 배열(입력 받은 적이 있는 숫자) 카운트
	for (i = 0; i <= max; i++) {
		if (a[i] == 1) cnt++;
	}
	// 출력
	printf("%d", cnt);

	return 0;
}