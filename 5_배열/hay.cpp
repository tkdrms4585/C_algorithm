/*
http://220.89.64.243/30stair/hay/hay.php?pname=hay
농부가 소에게 주는 건초 경비를 기록한다.
세금 낼 때가 되면 기간 동안의 경비 값을 알아야한다.
입력
N 개 만큼의 날의 경비
Q 만큼의 기간 1 3 > n1~n3일의 경비
*/

#include<stdio.h>

int main_hay() {
	int i, j, n, q;
	int hi[1000];
	// 경비 입력
	scanf("%d %d", &n, &q);
	for (i = 0; i < n; i++) 
		scanf("%d", &hi[i]);

	// 기간 입력, 출력
	for (i = 0; i < q; i++) {
		int a, b, sum = 0; // 기간을 담을 변수, 출력용 변수
		scanf("%d %d", &a, &b);
		for (j = a-1; j < b; j++) 
			sum += hi[j]; // 기간동안의 경비 계산
		printf("%d\n", sum);
	}
	return 0;
}