/*
http://220.89.64.243/30stair/shake/shake.php?pname=shake
���� ������ ������ ���� ���
�� ���ǿ��� 2���� ��ĵ�� �Ͼ ���� ���� ����
�ѹ��� �տ��� �ڷ� ū ���� ��
�ѹ��� �ڿ��� ������ ���� ���� ��
���� ������ �Ͼ �������� ���� ���� ���
*/

#include<stdio.h>

int main() {
	int i, j, n, t, s = 0;
	int num[1000];
	//�Է�
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", num[i]);
	
	// ����
	while(1) {
		for (j = s; j < n - s - 1; j++) {
			if (num[j] > num[j + 1])
				t = num[j], num[j] = num[j + 1], num[j + 1] = t;
		}
		for (j = n-s-1; j >= s; j--) {
			if (num[j] < num[j +1])
				t = num[j], num[j] = num[j + 1], num[j + 1] = t;
		}
		s++;
		if (j == n / 2 || j == n / 2 - 1)
			break;
	}

	for (i = 0; i < n; i++)
		printf("%d ", num[i]);
	printf("%d", s);

	return 0;
}