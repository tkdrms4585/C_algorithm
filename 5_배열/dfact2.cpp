/*
http://220.89.64.243/30stair/dfact/dfact.php?pname=dfact
145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
두 자리수 이상 1000000 이하인 수에서 이런 성질을 가지는 모든 수를 출력
배열에 1~9의 팩토리얼을 미리 계산하여 저장
*/

#include<stdio.h>

int main_dfact2() {
	int i, n, sum, num[10] = { 1, };

	// 1~9 팩토리얼 값을 배열에 저장
	for (i = 1; i < 10; i++)
		num[i] = num[i - 1] * i; // 1 * 2 * 3...

	for (i = 145; i <= 100000; i++) { // 145 이전의 숫자는 위 조건을 만족하지 않는다.
		n = i, sum = 0; // 계산할 n, sum 초기화
		while (n) {
			sum += num[n % 10]; // n의 1의 자리 숫자의 계산된 팩토리얼 값을 sum에 더한다.
			n /= 10;
		}
		if (i == sum)
			printf("%d\n", i);
	}
	return 0;
}