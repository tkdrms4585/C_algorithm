/*
http://220.89.64.243/30stair/rprint/rprint.php?pname=rprint
�Է� ���� �������� �������� ���
*/

#include<stdio.h>

int main_rprint() {
	int i, n = 0;
	scanf("%d", &n);

	int a[1001];
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = n-1; i >= 0; i--) {
		printf("%d ", a[i]);
	}

	return 0;
}