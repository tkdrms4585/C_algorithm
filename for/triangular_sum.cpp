/*
http://220.89.64.243/30stair/triangular_sum/triangular_sum.php?pname=triangular_sum
n ��° �ﰢ���� k X T(k+1)�� ��
n�� �Է� �޾��� ���� ���� ���
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

// ���� Ǫ�� �ߵ��� ��