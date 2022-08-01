/*
http://220.89.64.243/30stair/ms/ms.php?pname=ms
n개의 0~9로 이루어진 배열에서
연속으로 같거나 커지는 수열 
혹은 같거나 작은 수열의 최대 길이를 구하여라
*/

#include<stdio.h>

int main_ms2() {
	int i, n, a[100000];
	// 조건을 만족하는 수열 카운트 용, 최대 길이 저장용
	// 증가할 때, 감소할 때
	int up = 1, down = 1, max = 1; 
	// 입력
	scanf("%d", &n);
	
	scanf("%d", &a[0]); // a[i-1] 과 a[i]를 비교 하기 위해 1개만 따로 받는다.
	// 계산
	for (i = 1; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i - 1] <= a[i]) // 증가되는 수열 카운트
			up++;
		else 
			up = 1;

		if (a[i - 1] >= a[i]) // 감소되는 수열 카운트
			down++;
		else
			down = 1;
		
		if (up > max) // 증가, 감소 값을 넣기
			max = up;
		if (down > max)
			max = down;
	}
	// 출력
	printf("%d", max);

	return 0;
}