/*
http://220.89.64.243/30stair/pir/pir.php?pname=pir
20개의 수 중 
두수의 최대 합, 최대 합이 되는 두 수 출력
경우의 수가 여럿일 경우 만족하는 하나 출력
*/

#include<stdio.h>

int main_pir() {
	int i, j, sum = 0, n=0, m=0, a[20];
	for (i = 0; i < 20; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 20; i++) {
		for (j = i + 1; j < 20; j++) {
			if (sum < a[i] + a[j] && i != j) {
				sum = a[i] + a[j];
				n = a[i];
				m = a[j];
			}
		}
	}
	printf("%d\n", sum);
	printf("%d %d", n, m);

	return 0;
}