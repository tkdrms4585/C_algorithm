/*
http://220.89.64.243/30stair/insertion/insertion.php?pname=insertion
n���� �����͸� s�� ���� ������ ��� ���
*/

#include<stdio.h>

int main_insertion() {
	int a[1000];
	int i, j, t, n, s;
	
	// �Է�
	scanf("%d %d", & n, &s);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	// ����
	for (i = 1; i < s; i++){
		t = a[i];
		for (j = i-1; j >= 0; j--) {
			if (t < a[j])
				a[j + 1] = a[j];
			else
				break;
		}
		a[j + 1] = t;
	}

	// ���
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);

	return 0;
}