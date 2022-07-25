/*
http://220.89.64.243/30stair/center1/center1.php?pname=center1
1 ~ n -1의 합 = (n+1) ~ (n+m)의 합이 같으면 중간수
중간수면 O
아니면 X 출력
*/

#include<stdio.h>

int main_cnter1() {
	int i, n, sum = 0, sum2 = 0;
	scanf("%d", &n);
	for (i = 1; i < n; i++) { // 1부터 n-1까지의 합
		sum += i;
	}
	while (1) { // 중간수인지 판별
		sum2 += ++n;
		if (sum <= sum2) break;
	}
	if (sum == sum2)
		printf("O");
	else
		printf("X");

	return 0;
}