/*
http://220.89.64.243/30stair/pfactor/pfactor.php?pname=pfactor
n�� ���μ��� ũ�� ������ ���
*/

#include<stdio.h>

int main_pfactor() {
	int i, j, n;
	scanf("%d", &n);
	for (i = 2; i <= n; i++) {
		while (n % i == 0) {
			n /= i;
			printf("%d ", i);
		}
	}

	return 0;
}