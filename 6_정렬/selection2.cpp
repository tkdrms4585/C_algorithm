/*
http://220.89.64.243/judgeonline/showmessage.php?pname=selection2
n���� �����͸� s�� ���������� ��� ���
*/

#include<stdio.h>

int main_selection2() {
	int a[1000];
	int i, j, tmp;
	int n, s;
	// �Է�
	scanf("%d %d", &n, &s);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	// ����
	for (i = 0; i < s; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];	a[i] = a[j]; a[j] = tmp;
			}
		}
	}
	// ���
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}