/*
http://220.89.64.243/30stair/distinct/distinct.php?pname=distinct
n ���� ���� �Է� �޾� ���� �ٸ� ���� ������ ���
�Է� ���� ���ڸ� �迭�� �ִ� ����
�ð��� ���� ������ ������ �����ϴ� ����
*/

#include<stdio.h>

int main_distinct2() {
	int i, n, m, cnt = 0, a[10001], max = 0;
	// �Է�
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		a[m] = 1; // �Է¹��� ���� �迭 ��ȣ�� 1 ����
		if (m > max)
			max = m; // ���ǹ��� �ݺ��� �����ϱ� ���� �ִ� �� ���
	}
	// 1�� ���Ե� �迭(�Է� ���� ���� �ִ� ����) ī��Ʈ
	for (i = 0; i <= max; i++) {
		if (a[i] == 1) cnt++;
	}
	// ���
	printf("%d", cnt);

	return 0;
}