/*
http://220.89.64.243/30stair/pmin/pmin.php?pname=pmin
n���� ������ �־��� �� �� ������ �ִ� �� �� �ּ� ���� ��ġ�� ��� ���
*/

#include<stdio.h>

int main() {
	int i, n, min = 2000;
	int a[101];

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		if (min > a[i])
			min = a[i];
	}

	for (i = 1; i <= n; i++) {
		if (min == a[i])
			printf("%d ", i);
	}

	return 0;
}