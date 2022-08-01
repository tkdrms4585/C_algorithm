/*
http://220.89.64.243/30stair/dfact/dfact.php?pname=dfact
145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
두 자리수 이상 1000000 이하인 수에서 이런 성질을 가지는 모든 수를 출력
*/

#include<stdio.h>

int main_dfact() {
	int i, j, n, sum = 0, mul = 1;

	for (i = 10; i <= 100000; i++) { // 계산할 숫자
		sum = 0; // 팩토리얼 한 각 자리수를 더할 변수
		for (j = i; j != 0; j /= 10) { // 숫자를 10의 단위로 분할
			mul = 1; // 각 자리수를 팩토리얼 할 변수
			n = j % 10; // 각 자리수 분할
			while (n) { // 분할한 수를 팩토리얼
				mul *= n--;
			}
			sum += mul;
		}
		if (i == sum)
			printf("%d\n", i);
	}

	return 0;
}