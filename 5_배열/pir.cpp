/*
http://220.89.64.243/30stair/pir/pir.php?pname=pir
20���� �� �� 
�μ��� �ִ� ��, �ִ� ���� �Ǵ� �� �� ���
����� ���� ������ ��� �����ϴ� �ϳ� ���
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