/*
http://220.89.64.243/30stair/center1/center1.php?pname=center1
1 ~ n -1�� �� = (n+1) ~ (n+m)�� ���� ������ �߰���
�߰����� O
�ƴϸ� X ���
*/

#include<stdio.h>

int main_cnter1() {
	int i, n, sum = 0, sum2 = 0;
	scanf("%d", &n);
	for (i = 1; i < n; i++) { // 1���� n-1������ ��
		sum += i;
	}
	while (1) { // �߰������� �Ǻ�
		sum2 += ++n;
		if (sum <= sum2) break;
	}
	if (sum == sum2)
		printf("O");
	else
		printf("X");

	return 0;
}