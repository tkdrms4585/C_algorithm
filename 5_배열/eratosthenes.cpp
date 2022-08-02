/*
http://220.89.64.243/30stair/eratosthenes/eratosthenes.php?pname=eratosthenes
2 ���� n������ �Ҽ��� ���
*/

#include<stdio.h>

int main_eratosthenes() {
	int i, j, n;
	int era[10000] = { 0, }; // �Ҽ����� �ƴ��� �Ǻ��� �迭
	// �Է�
	scanf("%d", &n);

	// �Ҽ� �Ǻ���
	for (i = 2; i * i <= n; i++) {
		if(era[i] == 0)
			for (j = i * 2; j <= n; j += i) 
				era[j] = 1;
	}

	// ���
	for (i = 2; i < n; i++) {
		if (era[i] == 0)
			printf("%d ", i);
	}

	return 0;
}