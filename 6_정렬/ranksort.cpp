/*
http://220.89.64.243/30stair/rank_sort/rank_sort.php?pname=rank_sort
n���� ������ �Է� �޴´�
�Էµ� ������� ��� ���
*/

#include<stdio.h>

int main_rank() {
	int a[1000];
	int rank[1000];
	int i, j, n;

	// �Է�
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		rank[i] = 1; // ���� �ʱ�ȭ
	}

	// ���� ���
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (a[i] < a[j])
				rank[i]++;
		}
	}

	// ���� ���
	for (i = 0; i < n; i++) 
		printf("%d\n", rank[i]);

	return 0;
}