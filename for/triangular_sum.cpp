/*
http://220.89.64.243/30stair/triangular_sum/triangular_sum.php?pname=triangular_sum
n 번째 삼각수는 k X T(k+1)일 때
n을 입력 받았을 때의 값을 출력
*/

#include<stdio.h>

int main() {
	int i, n, sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum += i * n * (i + 1);
	}
	printf("%d", sum);
	return 0;
}

// 아직 푸는 중데스 ㅠ