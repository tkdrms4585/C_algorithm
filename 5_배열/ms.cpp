/*
http://220.89.64.243/30stair/ms/ms.php?pname=ms
n개의 0~9로 이루어진 배열에서
연속으로 같거나 커지는 수열 
혹은 같거나 작은 수열의 최대 길이를 구하여라
*/

#include<stdio.h>

int main() {
	int i, j, n, a[100000];
	// 조건을 만족하는 수열 카운트 용, 최대 길이 저장용
	// 증가할 때, 감소할 때
	int up, down, max = 0; 
	// 입력
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	// 계산
	for (i = 0; i < n; i++) {
		up = 1, down = 1; // 카운트 용 변수 초기화
		for (j = i; j < n - 1; j++) { // j와 j+1을 비교할거라 n-1까지
			if (a[j] <= a[j + 1]) // 증가되는 수열 카운트
				up++;
			else // 감소가 멈추면 브레이크
				break;
		}
		for (j = i; j < n - 1; j++) { // j와 j+1을 비교할거라 n-1까지
			if (a[j] >= a[j + 1]) // 감소되는 수열 카운트
				down++;
			else // 감소가 멈추면 브레이크
				break;
		}
		if (up > max) // 증가, 감소 값을 넣기
			max = up;
		if (down > max)
			max = down;
	}
	// 출력
	printf("%d", max);

	return 0;
}