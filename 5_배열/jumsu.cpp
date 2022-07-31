/*
http://220.89.64.243/30stair/jumsu/jumsu.php?pname=jumsu
OX 문제를 연속으로 맞추는 경우 가산점을 부여
입력
문제 수 n
정답 1 오답 0 
*/

#include<stdio.h>

int main_jumsu() {
	int i, n, answer = 0, cnt = 0, a[101] = { 0, };
	// 입력
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 1) // 정답이면 가산점 추가
			cnt++;
		else  // 오답이면 가산점 초기화
			cnt = 0;
		answer += cnt;
	}

	// 출력
	printf("%d", answer);

	return 0;
}