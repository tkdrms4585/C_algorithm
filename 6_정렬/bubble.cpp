/*
http://220.89.64.243/30stair/bubble/bubble.php?pname=bubble
n �������� ��
s ���� ��
n���� �����͸� �޾� ���� ��Ʈ�� s ȸ ���� ���� ��� ���
*/

#include<stdio.h>

int main_bubble() {
	int i, j, n, s, t;
	int num[1000];
	// �Է�
	scanf("%d %d", &n, &s);
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);

	// �����Ʈ sȸ
	for (i = 0; i < s; i++) 
		for (j = 0; j < n-i-1; j++) 
			if (num[j] > num[j + 1])
				t = num[j], num[j] = num[j + 1], num[j + 1] = t;

	// ���
	for (i = 0; i < n; i++)
		printf("%d ", num[i]);

	return 0;
}