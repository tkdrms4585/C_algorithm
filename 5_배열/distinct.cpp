/*
http://220.89.64.243/30stair/distinct/distinct.php?pname=distinct
n ���� ���� �Է� �޾� ���� �ٸ� ���� ������ ���
�ߺ��� ���� ����
������ ���������� �ð��� �����ϴ� ����
*/

#include<stdio.h>

int main_distinct() {
	int i, j, n, cnt = 0, a[1010];
	// �Է�
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	// �ߺ��� ����
	// a[i] �� a[j] �� ������ j�� 0 ����
	// a[i] �� 0�̸� ���� �� �� �ʿ䰡 ����
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] == 0) break;
			if (a[i] == a[j])
				a[j] = 0;
		}
	}
	// ���� ���� �ľ�
	for (i = 0; i < n; i++) {
		if (a[i] != 0)
			cnt++;
	}
	// ���
	printf("%d", cnt);

	return 0;
}