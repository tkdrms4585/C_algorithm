/*
http://220.89.64.243/30stair/ms/ms.php?pname=ms
n���� 0~9�� �̷���� �迭����
�������� ���ų� Ŀ���� ���� 
Ȥ�� ���ų� ���� ������ �ִ� ���̸� ���Ͽ���
*/

#include<stdio.h>

int main() {
	int i, j, n, a[100000];
	// ������ �����ϴ� ���� ī��Ʈ ��, �ִ� ���� �����
	// ������ ��, ������ ��
	int up, down, max = 0; 
	// �Է�
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	// ���
	for (i = 0; i < n; i++) {
		up = 1, down = 1; // ī��Ʈ �� ���� �ʱ�ȭ
		for (j = i; j < n - 1; j++) { // j�� j+1�� ���ҰŶ� n-1����
			if (a[j] <= a[j + 1]) // �����Ǵ� ���� ī��Ʈ
				up++;
			else // ���Ұ� ���߸� �극��ũ
				break;
		}
		for (j = i; j < n - 1; j++) { // j�� j+1�� ���ҰŶ� n-1����
			if (a[j] >= a[j + 1]) // ���ҵǴ� ���� ī��Ʈ
				down++;
			else // ���Ұ� ���߸� �극��ũ
				break;
		}
		if (up > max) // ����, ���� ���� �ֱ�
			max = up;
		if (down > max)
			max = down;
	}
	// ���
	printf("%d", max);

	return 0;
}