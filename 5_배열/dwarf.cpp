/*
http://220.89.64.243/30stair/dwarf/dwarf.php?pname=dwarf
9���� ������ �� ��¥ 7�����̸� ã�ƶ�
7�������� Ű�� ���� 100�̸�
9���� �������� Ű�� �־�����.
*/

#include<stdio.h>

int main_dwarf() {
	int i, j, sum = 0, a[9];
	// 9�������� Ű �Է�
	for (i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	// ��ü �� - ��¥ 2�� == 100
	// ��¥�� 0���� ����
	for (i = 0; i < 9; i++) {
		for (j = i; j < 9; j++) {
			if (sum - a[i] - a[j] == 100 && i != j) {
				a[i] = 0;
				a[j] = 0;
				goto A;
			}
		}
	}
	// 0�� ������ �ٸ� �������� Ű ���
	A:	
	for (i = 0; i < 9; i++) {
		if (a[i] != 0)
			printf("%d\n", a[i]);
	}

	return 0;
}