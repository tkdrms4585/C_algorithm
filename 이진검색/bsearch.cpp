#include<stdio.h>

int main_ds() {
	int num[500001];
	int i, j, n, seek, cnt = 0;
	int low, high, mid;
	scanf("%d", &n); // �ڷ� ��
	for (i = 1; i <= n; i++)
		scanf("%d", &num[i]); // �ڷ� �Է�
	scanf("%d", &seek); // ã�� ��

	low = 1, high = n;
	while (low <= high) {
		cnt++; // ��ȸ Ƚ��
		mid = (low + high) / 2;
		if (num[mid] > seek) // �߰� ���� ã�� ������ ū ���
			high = mid - 1;
		else if (num[mid] < seek) // �߰� ���� ã�� ������ ���� ���
			low = mid + 1;
		else {
			printf("%d", cnt); // �ڷḦ ã���� ����
			return 0;
		}
	}
	printf("not found"); // �ڷḦ �� ã�� ���


	return 0;
}