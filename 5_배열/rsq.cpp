/*
http://220.89.64.243/30stair/rsq/rsq.php?pname=rsq
n���� ����
������ ����, �� ������ �־��� ��
������ ���� ���
*/

#include<stdio.h>

int main_rsq() {
	int i, j, n, q;
	int num[100000];
	num[0] = 0; // �迭 ù��°�� 0 ����
	// ���� �Է�
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &num[i]);
		num[i] += num[i - 1]; // ������ �������� ���ؼ� ����
	}

	// ���� �� �� ���� �Է�
	scanf("%d", &q);
	for (i = 0; i < q; i++) {
		int a, b; // ������ ���� ���� �� ��
		scanf("%d %d", &a, &b);
		// num[b] = 1���� b������ ������
		// num[a-1] = 1���� a-1������ ������
		printf("%d\n", num[b] - num[a - 1]); 
		
	}

	return 0;
}