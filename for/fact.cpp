/*
http://220.89.64.243/30stair/fact/fact.php?pname=fact
n�� �־����� n ���丮���� ���Ͽ���.
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