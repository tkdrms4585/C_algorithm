/*
http://220.89.64.243/30stair/min/min.php?pname=min
7���� ���� �Է� �޾� ���� �ּҰ��� ���
*/

#include<stdio.h>

int main_min() {
	int i, n, d = 999;

	for (i = 0; i < 7; i++) {
		scanf("%d", &n);
		if (n < d)
			d = n;
	}

	printf("%d", d);
	return 0;
}