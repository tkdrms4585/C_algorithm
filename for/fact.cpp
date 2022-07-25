/*
http://220.89.64.243/30stair/fact/fact.php?pname=fact
n이 주어질때 n 팩토리얼을 구하여라.
*/

#include<stdio.h>

int main_fact() {
	int i, m = 1, n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		m *= i;
	}
	printf("%d", m);

	return 0;
}