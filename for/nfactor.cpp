/*
http://220.89.64.243/30stair/nfactor/nfactor.php?pname=nfactor
n�� �Է� �޾� n�� ����� ���� ���
*/

#include<stdio.h>

int main_nfactor() {
	int i, n, cnt = 0;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		if (n % i == 0)
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}