/*
http://220.89.64.243/30stair/jumsu/jumsu.php?pname=jumsu
OX ������ �������� ���ߴ� ��� �������� �ο�
�Է�
���� �� n
���� 1 ���� 0 
*/

#include<stdio.h>

int main_jumsu() {
	int i, n, answer = 0, cnt = 0, a[101] = { 0, };
	// �Է�
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 1) // �����̸� ������ �߰�
			cnt++;
		else  // �����̸� ������ �ʱ�ȭ
			cnt = 0;
		answer += cnt;
	}

	// ���
	printf("%d", answer);

	return 0;
}