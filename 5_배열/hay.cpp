/*
http://220.89.64.243/30stair/hay/hay.php?pname=hay
��ΰ� �ҿ��� �ִ� ���� ��� ����Ѵ�.
���� �� ���� �Ǹ� �Ⱓ ������ ��� ���� �˾ƾ��Ѵ�.
�Է�
N �� ��ŭ�� ���� ���
Q ��ŭ�� �Ⱓ 1 3 > n1~n3���� ���
*/

#include<stdio.h>

int main_hay() {
	int i, j, n, q;
	int hi[1000];
	// ��� �Է�
	scanf("%d %d", &n, &q);
	for (i = 0; i < n; i++) 
		scanf("%d", &hi[i]);

	// �Ⱓ �Է�, ���
	for (i = 0; i < q; i++) {
		int a, b, sum = 0; // �Ⱓ�� ���� ����, ��¿� ����
		scanf("%d %d", &a, &b);
		for (j = a-1; j < b; j++) 
			sum += hi[j]; // �Ⱓ������ ��� ���
		printf("%d\n", sum);
	}
	return 0;
}